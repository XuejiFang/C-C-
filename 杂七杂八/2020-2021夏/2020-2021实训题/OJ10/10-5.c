#include<stdio.h>

int GetData(int *p,char c,int f){
    int n=0;
    int i=0;
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
        }else if(c==' '){
            scanf("%d",p+i);
            i++;
        }
        scanf("%c",&c);
        if(c=='\n') return 0;
    }
    *(p+i)='\0';
    return n+1;
}
int main(){
    int a1[22],a2[22];
    double sum;
    int n,m,j,flag;
    j=1;
    flag=1;
    char c;
    while(scanf("%c",&c)==1){
        sum=0.0;
        n=GetData(a1,c,flag);
        if(n==0) break;
        scanf("%c",&c);
        scanf("%c",&c);
        flag=1-flag;
        m=GetData(a2,c,flag);
        flag=1-flag;
        if(m==n){
            for(int i=0;i<n;i++)    sum+=a1[i]*a2[i];
            printf("Case %d: %.2lf\n",j,sum);
        }else
            printf("Case %d: none\n",j);

        j++;
    }
    /*
    scanf("%c",&c);
    n=GetData(a1,c,flag);

    scanf("%c",&c);
    scanf("%c",&c);
    flag=1-flag;
    m=GetData(a2,c,flag);
    flag=1-flag;
*/
    return 0;
}



