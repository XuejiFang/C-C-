#include <stdio.h>
int main(void)
{
    int n;   //�����ܽ��
    int pay; //ʵ����
    printf("�����붩���ܽ�");
    scanf("%d", &n);
    if (n<=0)
        printf("��������Ϊ�������\n");
    else if (n>=100)
        pay=(int)(n*0.75);
    else if (n>=50)
        pay=n-10;
    else if (n<20)
        pay=n+4;
    else
        pay=n;
    if(n>0) printf("�ܽ��%dԪ��ʵ���%dԪ\n" ,n,pay);
    return 0;
}

