#include <stdio.h>
#include <limits.h>
#ifndef  LONG_LONG_MAX
#define  LONG_LONG_MAX  LLONG_MAX
#define  ULONG_LONG_MAX  ULLONG_MAX
#endif

unsigned long long M(int d,int n){
    int i;
    unsigned long long t,s;
    t=0;
    s=0;
    for(i=0;i<n&&s*10<=LLONG_MAX;i++)
        s=s*10+d;
    return s;
}
int main(){
    int d,n,m,j;
    j=1;
    char c;
    unsigned long long max,sum,tmp;
    while(scanf("%d %d",&d,&n)==2){
        max=M(d,n);
        sum=0;
        tmp=0;
        if(d==0)
            m=n;
        else
            m=0;
        while(max!=0){
            max/=10;
            m++;
        }
        max=M(d,n);
        for(int i=1;i<=n&&tmp<max;i++){
            tmp=M(d,i);
            sum+=tmp;
        }
        printf("Case %d: s(%d, %d) = %llu\n",j,d,m,sum);
        j++;
    }
    return 0;
}
