#include<stdio.h>
#include <limits.h>

#define  LONG_LONG_MAX  LLONG_MAX
int main(){
    int i,j,k;
    int d,m,n,tmp;
    int a[25];
    j=1;
    while(scanf("%d %d",&d,&n)==2){
        if(d==0) printf("Case %d: s(0, %d) = 0\n",j,n);
        else{
        for(k=0;k<25;k++)   a[k]=0;
        if((d==9||d==8)&&n>18)
            m=18;
        else if(d<9&&n>19)
            m=19;
        else
            m=n;
        //printf("%d\n",m);
        for(i=m;i>=1;i--){
            tmp=i*d+a[m-i];
            a[m-i]=tmp%10;
            a[m-i+1]=tmp/10;
        }
        printf("Case %d: s(%d, %d) = ",j,d,m);
        int flag=0;
        for(i=m;i>=0;i--){
            if(a[i]!=0) flag=1;
            if(flag)  printf("%d",a[i]);
        }
        //if(flag==0) printf("0");
        printf("\n");
        j++;

        }

    }




    return 0;
}
