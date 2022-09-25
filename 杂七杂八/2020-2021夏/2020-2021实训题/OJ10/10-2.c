#include<stdio.h>

int main(){
    char c;
    int a1[20],a2[20];
    int i,j,k,m;
    k=1;
    m=1;
    i=0;
    j=0;
    while(scanf("%c",&c)==1){

        if((c=='('||c==' ')&&k){
            scanf("%d",&a1[i]);
            i++;
        }
  /*     if(c==')'&&!k){
            double sum=0.0;
            if(i==j){
                for(int n=0;n<=i;n++)
                    sum+=a1[n]*a2[n];
                printf("Case %d: %.2lf\n",m,sum);
            }else
                printf("Case %d: none\n",m);
            m++;
            i=j=0;
            k=1-k;
            sum=0.0;
        }else if(')')
            k=1-k; */
        if(c==')') k=1-k;
        if((c=='('||c==' ')&&!k){
            scanf("%d",&a2[j]);
            j++;
        }
    }
    for(int n=0;n<=i;n++)
        printf("%d",a1[n]);


    return 0;
}
