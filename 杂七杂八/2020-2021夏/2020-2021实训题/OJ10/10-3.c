#include<stdio.h>

int GetData(int *p,char c){
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
        }
        scanf("%c",&c);
    }
    //*(p+i)='\0';
    return n+1;
}
int main(){
    int a1[22],a2[22];
    double sum;
    int n,m,j,flag;
    j=1;
    flag=1;
    char c;
    scanf("%c",&c);
    while(c=='('){

        for(int i=0;i<22;i++){
            a1[i]=0;
            a2[i]=0;
        }

        sum=0.0;
        n=GetData(a1,c);
        scanf("%c",&c);
        //if(n==1) break;
        //printf("%c",c);
        scanf("%c",&c);
        //flag=1-flag;
        m=GetData(a2,c);
        //flag=1-flag;
        if(m==n){
            for(int i=0;i<n;i++){
                printf("%d %d\n",a1[i],a2[i]);

                sum+=a1[i]*a2[i];

            }
            printf("Case %d: %.2lf\n",j,sum);
        }else
            printf("Case %d: none\n",j);

        j++;
        printf("%c\n",c);
        //scanf("%c",&c);
        //if(c=='\n') flag2=1;
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


