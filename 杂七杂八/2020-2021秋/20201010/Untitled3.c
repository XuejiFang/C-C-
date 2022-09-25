#include <stdio.h>

int main(){

    int n,m,i;
    float t,sum=0;
    scanf("%d %d",&n,&m);
    t=n;
    sum=t;
    for(i=1;i<m;i++)
    {
        t=t/4;
        sum=sum+2*t;

    }
    t=t/4;
    printf("%.2f\n%.2f",sum,t);



    return 0;
}
