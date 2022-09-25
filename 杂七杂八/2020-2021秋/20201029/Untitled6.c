#include <stdio.h>

void put(char c,int num)
{
    int i=1;
    for(;i<=num;i++)
        printf("%c",c);
}


int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        put(' ',(n-i)*2);
        for(int j=1;j<=i;j++)
        {
            printf("%2d",j);
        }
        for(int j=i-1;j>=1;j--)
        {
            printf("%2d",j);
        }
        printf("\n");
    }


    return 0;
}
