#include<stdio.h>
/*
double a1[20],a2[20];
int GetData(double *p){

    char c;
    int i=0;
    scanf("%c",&c);
    while(c!=')'){
        if(c>='0'&&c<='9'){
            *(p+i)=c-'0';
            i++;
        }else if(c=='-'){
            scanf("%lf",p+i);
            *(p+i)=0-*(p+i);
            i++;
        }else if(c==','){
            scanf("%lf",p+i);
            i++;
        }
        scanf("%c",&c);
    }
    return i;
}
int main(){
    double sum;
    int n,m,j=1;
    char c;
    while(scanf("%c",&c)==1){
        sum=0.0;
        n=GetData(a1);
        m=GetData(a2);
        if(m==n){
            for(int i=0;i<n;i++)    sum+=a1[i]*a2[i];
            printf("Case %d: %.2lf\n",j,sum);
        }else
            printf("Case %d: none\n",j);
        j++;
    }

    return 0;
}
*/
int main(){
    char c;
    int n=0;
    scanf("%c",&c);
        if(c==' ')
            n++;
    scanf("%c",&c);
        if(c==' ')
            n++;
            scanf("%c",&c);
        if(c==' ')
            n++;
     printf("%d",n);

    return 0;
}
