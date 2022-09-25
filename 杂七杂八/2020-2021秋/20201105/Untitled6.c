#include <stdio.h>
#include <string.h>

void fxj(char a[])
{
    int sum=0;
    for (int i=0;i<=strlen(a)-1;i++)
    {
        if(a[i]>='0'&&a[i]<='9')
            sum=sum*10+(a[i]-'0');
    }
    printf("digit=%d,%d",sum,sum*2);
}

int main()
{
    char a[100];
    printf("Enter a string:");
    gets(a);
    fxj(a);
    return 0;
}
