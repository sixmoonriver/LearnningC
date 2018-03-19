#include <stdio.h>
enum animal {Dog,Cat,Mouse,Chick,Invaid};

int test()
{
    int i;
    for(i=0;i<10;i++)
        printf("函数test中变量i的值是：%d\n",i);
    return(0);
}

int jiechen(int n)
{
    if(n > 0)
        return(n*jiechen(n-1));
    else
        return(1);
}
int maxgy(int vx,int vy)
{
    return(vy==0?vx:maxgy(vy,vx%vy));
}
int int_set(int vc[],int no,int val)
{
    int i;
    for(i=0;i<no;i++)
        vc[i] = val;
}
int main()
{
    int x,y,z,t;
    x=y=z=1;
    t=0;
    printf("t=%d",t=++x||++y&&++z);
    x=10;
    printf("x=%d",x+=x-=x-x);

   /* int ary[] = {1,2,3,4,5};
    int_set(ary,5,0);
    int i;
    for(i=0;i<5;i++)
        printf("ary[%d] = %d\n",i,ary[i]);
    /*
    int vx,vy;
    printf("请输入2个整数：");
    scanf("%d%d",&vx,&vy);
    printf("这两个数的最大公约数是：%d",(vx>vy)? maxgy(vx,vy):maxgy(vy,vx));

    int i=10;
    printf("%d的阶乘是%d\n",i,jiechen(i));
    test();
    printf("主函数中变量i的值(八进制)是：%o",i);
    printf("主函数中变量i的值(十六进制)是：%x",i);

    enum animal selected;
    do {
        printf("请选择你想要的动物：\n 0---Dog\n 1---Cat\n 2---Mouse\n 3---Chick\n 4---Invaid\n");
        scanf("%d",&selected);
        switch(selected){
            case 0 : printf("汪汪\n"); break;
            case Cat : printf("喵喵\n"); break;
            case Mouse : printf("吱吱\n"); break;
            case Chick : printf("咯咯\n"); break;
            default :printf("啊\n");
        }
    } while(1);
*/


}
