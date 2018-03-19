/*
 显示当前的日期
 time函数获取当前的时间，是时间戳值。
 localtime函数把时间以戳转换为tm结构体类型的时间格式；
 */
 #include <stdio.h>
 #include <time.h>

 void put_date(void)
 {
     time_t current;
     struct tm *local;
     char wday_name[][7] = {"日","一","二","三","四","五","六"};
     time(&current);
     local=localtime(&current);
     printf("%4d年%02d月%02d日(%s)",local->tm_year+1900,local->tm_mon+1,local->tm_mday,wday_name[local->tm_wday]);
 }

 int main()
 {
     printf("今天是：");
     put_date();
     printf("。\n");

     return (0);
 }
