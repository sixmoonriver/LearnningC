'''
脚本名称：predict.py

川菜预测脚本，使用方法
python predict.py chuancai_res50_v2.h5 test

chuancai_res50_v2.h5 为上一个步骤训练出来的模型
test 为测试图片的目录，注意必须要有子目录，否则程序执行有问题。

'''



import os
import sys
from PIL import Image,ImageDraw,ImageFont
import glob
os.environ["CUDA_VISIBLE_DEVICES"] = "0"

import tensorflow as tf
#config = tf.ConfigProto()
config=tf.compat.v1.ConfigProto()
config.gpu_options.allow_growth = True
 
import numpy as np
from tensorflow import keras
from tensorflow.python.keras import backend as K
#K.set_session(tf.Session(config=config))
K.set_session(tf.compat.v1.Session(config=config))


from tensorflow.python.keras.models import load_model
from tensorflow.python.keras.preprocessing import image
from tensorflow.python.keras.applications.inception_v3 import preprocess_input

def read_img(img_path):
    try:
        img = image.load_img(img_path, target_size=(224, 224))
    except Exception as e:
        print(e)
    img = image.img_to_array(img)
    img = np.expand_dims(img, axis=0)
#    print("loadimg……")
    return img/255

def draw_save(img_path, label, out='/tmp'):
#    print("save……")
    img = Image.open(img_path)
    _,classid,imgf = img_path.rsplit(r'/',2)
    os.makedirs(os.path.join(out,classid), exist_ok=True)
    if img is None:return None
    draw = ImageDraw.Draw(img)
    font = ImageFont.truetype("huawenxingkai.ttf",60) #需要安装相应的字体
    draw.text((10,10),label,(10,10,10), font=font)
    img.save(os.path.join(out,classid,imgf))
    
if __name__ == '__main__':
    model = load_model(sys.argv[1])
    labels = {'回锅肉': 0, '夫妻肺片': 1, '宫保鸡丁': 2, '水煮鱼': 3, '盐烧白': 4, '盐煎肉': 5, '粉蒸肉': 6, '蒜泥白肉': 7, '麻婆豆腐': '8'}
    labels = { str(v):k for k,v in labels.items()}
#    print(labels)
    for subdir in glob.glob(sys.argv[2]+'/*'):
        for img_path in glob.glob(subdir+'/*.jpg')[:24]:
            img = read_img(img_path)
            pred = model.predict(img)[0]
            #print(pred.shape)
            index = np.argmax(pred)
            print(index, labels[str(index)])
            draw_save(img_path, labels[str(index)], out='/tmp/chuancai/')