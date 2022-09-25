#include <stdio.h>
#include <math.h>

int main(){

    int n,k,t,s=0,sum=0;
    int a[100];
    int i,j,m;
    int min=10000,max=0;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        s=s+a[i];
    }
    for(j=0;j<=a;j++){
        t=abs(k*n-k+j-s);
        if(min>t){
            min=t;
            m=i;
        }
        if(max<t){
            max=t;
        }
    }
    for(j=a+1;t>max;j++){
        t=abs(k*n-k+j-s);
        if(min>t){
            min=t;
            m=i;
        }
    }
    for(i=0;i<n;i++){
        sum+=abs(min+i*k-a[i]);
    }
    printf("%d",sum);
    return 0;
}
