import matplotlib.pyplot as plt
import os
#os.environ["CUDA_VISIBLE_DEVICES"] = "1"  #这里设置为1，gpu不工作
os.environ["CUDA_VISIBLE_DEVICES"] = "0"
import tensorflow as tf
# config = tf.ConfigProto() 这一条在新的版本用不了,改为下面的
config=tf.compat.v1.ConfigProto()
#config.gpu_options.allow_growth = True 按需分配内存，不设置True会导致（could not create cudnn handle cudnn_status_internal_error），如果导致OOM，要调整小batch size
config.gpu_options.allow_growth = True
session = tf.compat.v1.InteractiveSession(config=config)
session.as_default()

from tensorflow import keras
from tensorflow.python.keras import backend as K
K.set_session(tf.compat.v1.Session(config=config))
#sess=tf.compat.v1.Session(config=config)
from tensorflow.python.keras.applications.inception_v3 import InceptionV3
from tensorflow.python.keras.preprocessing.image import ImageDataGenerator

train_dir = '/data/AIvision/IMSG/train'
test_dir = '/data/AIvision/IMSG/test'
image_size = 224
class_numbers = len(os.listdir(train_dir))

if os.environ["CUDA_VISIBLE_DEVICES"]:
    print('Using GPU')
    input_shape = (image_size,image_size,3)
else:
    print('Using CPU')
    input_shape = (3,image_size,image_size)

Backbone = InceptionV3(include_top=False,weights='imagenet',input_shape=input_shape)

for layer in Backbone.layers[:110]:
    layer.trainable = False
    
model = keras.models.Sequential()

model.add(Backbone)
model.add(keras.layers.Flatten())
model.add(keras.layers.Dense(1024,activation='relu'))
model.add(keras.layers.Dropout(0.5))
model.add(keras.layers.Dense(class_numbers,activation='softmax'))

model.summary()

train_datagen = ImageDataGenerator(rescale=1./255,rotation_range=45,width_shift_range=0.2,height_shift_range=0.2,horizontal_flip=True,fill_mode='nearest')
validation_datagen = ImageDataGenerator(rescale=1./255)
#下面batch_size原来为64，因为触发OOM，调整为32正常。显卡为GTX950 2G显存 
train_generator = train_datagen.flow_from_directory(train_dir,target_size=(image_size,image_size),batch_size=32,class_mode='categorical')

validation_generator = validation_datagen.flow_from_directory(test_dir,target_size=(image_size,image_size),batch_size=64,class_mode='categorical',shuffle=False)

print('='*60)
print(train_generator.class_indices)
print('='*60)

checkpoint = keras.callbacks.ModelCheckpoint('chuancai_res50_v2.h5',verbose=1,monitor='val_acc',save_best_only=True,mode='auto')
#model.compile(loss='categorical_crossentropy',optimizer=keras.optimizers.SGD(lr=le-4,momentum=0.9),metrics=['acc']) 原代码le未定义
model.compile(loss='categorical_crossentropy',optimizer=keras.optimizers.SGD(lr=0.01,momentum=0.9),metrics=['acc'])
#H = model.fit_generator(train_generator,steps_per_epoch=train_generator.samples/train_generator.batch_size,epochs=20,validation_data=validation_generator,validation_steps=validation_generator.batch_size,callbacks=[checkpoint],verbose=1)
H = model.fit(train_generator,steps_per_epoch=train_generator.samples/train_generator.batch_size,epochs=20,validation_data=validation_generator,validation_steps=validation_generator.batch_size,callbacks=[checkpoint],verbose=1)
#save the accuracy and loss curves
epochs = range(len(H.history['acc']))

plt.figure()
plt.plot(epochs,H.history['acc'],'b',label='Training acc')
plt.plot(epochs,H.history['val_acc'],'r',label='Validation acc')
plt.title('Training and validation accuracy')
plt.legend()
plt.savefig('acc_chuancai.jpg')

plt.figure()

plt.plot(epochs,H.history['loss'],'b',label='Training loss')
plt.plot(epochs,H.history['val_loss'],'r',label='Validation loss')
plt.title('Training and validation loss')
plt.legend()
plt.savefig('loss_chuancai.jpg')
