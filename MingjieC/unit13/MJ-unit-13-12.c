/*
 改写代码13-4，将日期和时间作为stuct tm型的值直接向二进制文件进行读写
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
        printf("\a打开文件失败！\n");
     else{
        fwrite(&datetime,sizeof(datetime),1,fp);
        fclose(fp);
        printf("写文件成功。");
     }
     if((fp = fopen("abc.bin","rb")) == NULL)
        printf("\a打开文件失败！\n");
     else{
        fread(&t,sizeof(datetime),1,fp);
        printf("%d年%d月%d日",t->tm_year+1900,t->tm_mon+1,t->tm_mday);
        fclose(fp);
     }
 }
