#include <stdio.h>
int main(void)
{
    int n;   //订餐总金额
    int pay; //实付款
    printf("请输入订餐总金额：");
    scanf("%d", &n);
    if (n<=0)
        printf("订单金额不能为零或负数！\n");
    else if (n>=100)
        pay=(int)(n*0.75);
    else if (n>=50)
        pay=n-10;
    else if (n<20)
        pay=n+4;
    else
        pay=n;
    if(n>0) printf("总金额%d元，实付款：%d元\n" ,n,pay);
    return 0;
}

