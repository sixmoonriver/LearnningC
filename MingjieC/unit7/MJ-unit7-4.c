#include <stdio.h>
/* ��дset_n���������ؽ��޷�������x�ĵ�POSλ��ʼ��nλ��Ϊ1���ֵ����Ϊ0 ��ȡ����ֵ
flag ȡֵ��Χ0 1 2;
*/

unsigned int setgeneral(unsigned int num,int pos,int lx,int flag)
{
    unsigned n=1,i,aftnum;
    for(i=0;i<lx;i++)
    {
        n = 1;
        n = n << (pos - 1 + i);
        if(flag==0)
            num = num & (~n);
        else if(flag==1)
            num = num | n;
        else if(flag==2)
        {
            if(num & n)
                num = num & (~n);
            else
                num = num | n;
        }

    }
    return (num);
}
int main()
{
    int ipt1,ws1,dua,what;
    printf("������һ���޷���������");
    scanf("%d",&ipt1);
    printf("�����뿪ʼ��λ����");
    scanf("%d",&ws1);
    printf("������Ҫ������λ����");
    scanf("%d",&dua);
    printf("������Ҫ��λ��0��1��2��");
    scanf("%d",&what);
    printf("%d��%d��ʼ����%d����Ϊ%d���ֵ�ǣ�%d",ipt1,ws1,dua,what,setgeneral(ipt1,ws1,dua,what));

}
