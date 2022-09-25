#include<stdio.h>

int main(){
    int n,n2,m,i,s;
    int j=1;
    while(scanf("%d",&n)==1){
        n2=n;
        m=n*n;
        i=0;
        while(n!=0){
           n/=10;
           i++;
        }
        s=1;
        for(int k=1;k<=i;k++)   s*=10;
        if(m%s==n2)
            printf("Case %d: %d, %d, Yes\n",j,n2,m);
        else
            printf("Case %d: %d, %d, No\n",j,n2,m);

        j++;
    }

    return 0;
}
