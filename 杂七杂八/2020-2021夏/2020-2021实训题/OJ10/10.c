#include<stdio.h>

int Getdata(double *p1,double *p2,char c){
    int i=1;
    int n,m;
    scanf("%lf",p1);
    while(c!=')'){
        scanf("%c",&c);
        if(c==','){
            scanf("%lf",p1+i);
            i++;
        }
    }
    n=i;
    i=1;
    scanf("%c",&c);
    while(c!=')'){
        scanf("%c",c);
        if(c==','||c=='('){
            scanf("%lf",p2+i);
            i++;
        }
    }
    m=i;
    if(n==m)
        return n;
    else
        return 0;
}

int main(){
    double sum;
    int n;
    int j=1;
    char c;
    while(scanf("%c",&c)==1){
        double a1[20],a2[20];
        n=Getdata(a1,a2,c);
        sum=0.0;
        if(n!=0){
            for(int i=0;i<=n;i++)
                sum+=a1[i]*a2[i];
            printf("Case %d: %.2lf\n",j,sum);
        }else
            printf("Case %d: none\n",j);
        j++;
    }




    return 0;
}
