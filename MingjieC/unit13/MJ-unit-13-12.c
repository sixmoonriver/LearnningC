/*
 ��д����13-4�������ں�ʱ����Ϊstuct tm�͵�ֱֵ����������ļ����ж�д
 */
 #include <stdio.h>
 #include <time.h>
 int main()
 {
     FILE *fp;
     time_t current;
     struct tm *datetime,*t;
     time(&current);
     datetime = localtime(&current);

     if((fp = fopen("abc.bin","wb")) == NULL )
        printf("\a���ļ�ʧ�ܣ�\n");
     else{
        fwrite(&datetime,sizeof(datetime),1,fp);
        fclose(fp);
        printf("д�ļ��ɹ���");
     }
     if((fp = fopen("abc.bin","rb")) == NULL)
        printf("\a���ļ�ʧ�ܣ�\n");
     else{
        fread(&t,sizeof(datetime),1,fp);
        printf("%d��%d��%d��",t->tm_year+1900,t->tm_mon+1,t->tm_mday);
        fclose(fp);
     }
 }
