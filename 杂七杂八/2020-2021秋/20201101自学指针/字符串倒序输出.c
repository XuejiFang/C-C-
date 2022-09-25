#include<stdio.h>
#include<string.h>
int main(void)

{
    char str[100];char temp;
    int i,j,n,m;
    gets(str);

    for(i=0;i<strlen(str);i++)
    {
        printf("%d:",i+1);
        for(j=0;j<i;j++)
        printf (" ");
        n=strlen(str);
        for(m=0;m<(n/2);m++)
        {
        temp=str[m];
        str[m]=str[n-m-1];
        str[n-m-1]=temp;
        printf ("%c",str[m]);
        }
    printf ("\n");
    }

    return 0;
}
