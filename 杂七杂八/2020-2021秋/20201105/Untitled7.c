#include <stdio.h>
#include <string.h>

void fxj(char a[],char m)
{
    int n=strlen(a);
    int sum=0,k=0,i,j;
    for (i=0;i<n;i++) sum=sum*10+a[i]-'0';
    for(i=1;i<=strlen(a)-2;i++)
    {
        if(a[i]==m)
        {
            for(j=i;j<=strlen(a)-2;j++) a[j]=a[j+1];
            a[j]='\0';
            i--;
        }

    }
    if (n==strlen(a))
    {
        printf("%c²»´æÔÚÓÚ%d",m,sum);
    }
    else
    {
        for (i=0;i<strlen(a);i++) k=k*10+a[i]-'0';

    double digit;
    digit=(double)sum/k;
    printf("%d,%.2lf",k,digit);
    }

}

int main()
{
    char a[100],m;
    int i=0;
    while(1)
    {
        a[i]=getchar();
        if(a[i]==' ')
        {
            a[i]='\0';
            break;
        }
        i++;

    }
    m=getchar();
    fxj(a,m);
    putchar('\n');

    return 0;
}
