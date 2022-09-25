#include<stdio.h>

int GetData(int *p,int i){
    char c;
    int n=0; //¶ººÅ¸öÊý
    scanf("%c",&c);
    while(c!=')'){
        if(c=='-'){
            scanf("%d",p+i);
            *(p+i)=0-*(p+i);
            i++;
        }else if(c=='('||c==' '){
            scanf("%d",p+i);
            i++;
        }else if(c==','){
            n++;
        }
        scanf("%c",&c);
    }
    return n+1;
}

int main(){
    int a1[20],a2[20];
    double sum;
    int n,m,j=1,k=0;
    char c;
    while(scanf("%c",&c)==1){
        sum=0.0;
        scanf("%d",&a1[k]);
        k++;
        n=GetData(a1,k);
        k=0;
        m=GetData(a2,k);
        if(m==n){
            for(int i=0;i<n;i++)    sum+=a1[i]*a2[i];
            printf("Case %d: %.2lf\n",j,sum);
        }else
            printf("Case %d: none\n",j);
        j++;
    }

    return 0;
}

