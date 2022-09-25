#include <stdio.h>
#include <string.h>


int count(char *p)
{
    int sum=0,flag=0;
    int j;
    for(j=0;j<=strlen(*p);j++)
    {
        p=j;
        if(*p!=' '&&flag==0)
        {
            sum++;
            flag=1;
        }
        if(*p==' ') flag=0;

    }

    return sum;
}

int main()
{
    char a[100];
    char *p=&a;
    p=0;
    while((*p=getchar())!='\n') p++;
    printf("%d",count(*p));
    return 0;
}


