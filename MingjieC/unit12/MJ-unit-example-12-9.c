/*
 ��ʾ��ǰ������
 time������ȡ��ǰ��ʱ�䣬��ʱ���ֵ��
 localtime������ʱ���Դ�ת��Ϊtm�ṹ�����͵�ʱ���ʽ��
 */
 #include <stdio.h>
 #include <time.h>

 void put_date(void)
 {
     time_t current;
     struct tm *local;
     char wday_name[][7] = {"��","һ","��","��","��","��","��"};
     time(&current);
     local=localtime(&current);
     printf("%4d��%02d��%02d��(%s)",local->tm_year+1900,local->tm_mon+1,local->tm_mday,wday_name[local->tm_wday]);
 }

 int main()
 {
     printf("�����ǣ�");
     put_date();
     printf("��\n");

     return (0);
 }
