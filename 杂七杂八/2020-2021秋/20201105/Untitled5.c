#include <stdio.h>
#include <string.h>

void delchar(char a[],char t)
{
    int i=0,j;
    while(a[i]!='\0')
    {
        if(a[i]==t)
        {
            for (j=i;j<=strlen(a)-2;j++) a[j]=a[j+1];
            a[j]='\0';
        }
        i++;
    }
    puts(a);
}

int main()
{
    char a[100],b[100],t;
    printf("Enter a string:");
    gets(a);
    printf("Enter a char:");
    scanf("%c",&t);
    printf("After deleted,the string is:");
    delchar(a,t);
    return 0;
}

