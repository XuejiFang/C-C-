#include <stdio.h>
#include <math.h>

int main(){

    double x;int n;
    double sum,tmp1,tmp2;
    int i,j;
    sum=0.0;
    scanf("%lf %d",&x,&n);
    tmp1=tmp2=1.0;

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=2*i-1;j++)
        {
            tmp1=tmp1*(double)j;
            tmp2=tmp2*x;
        }
        if(i%2==0)
            sum=sum-tmp2/tmp1;
        else
            sum=sum+tmp2/tmp1;
        tmp1=tmp2=1.0;
    }

    printf("%.8lf",sum);

    return 0;
}





