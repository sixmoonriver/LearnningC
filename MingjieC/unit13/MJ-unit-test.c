#include <stdio.h>
enum animal {Dog,Cat,Mouse,Chick,Invaid};

int test()
{
    int i;
    for(i=0;i<10;i++)
        printf("����test�б���i��ֵ�ǣ�%d\n",i);
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
    printf("������2��������");
    scanf("%d%d",&vx,&vy);
    printf("�������������Լ���ǣ�%d",(vx>vy)? maxgy(vx,vy):maxgy(vy,vx));

    int i=10;
    printf("%d�Ľ׳���%d\n",i,jiechen(i));
    test();
    printf("�������б���i��ֵ(�˽���)�ǣ�%o",i);
    printf("�������б���i��ֵ(ʮ������)�ǣ�%x",i);

    enum animal selected;
    do {
        printf("��ѡ������Ҫ�Ķ��\n 0---Dog\n 1---Cat\n 2---Mouse\n 3---Chick\n 4---Invaid\n");
        scanf("%d",&selected);
        switch(selected){
            case 0 : printf("����\n"); break;
            case Cat : printf("����\n"); break;
            case Mouse : printf("֨֨\n"); break;
            case Chick : printf("����\n"); break;
            default :printf("��\n");
        }
    } while(1);
*/


}
