#include <stdio.h>

int main()
{
    int i,j;
    long long n;
    int a[999];
    i=1;
    printf("Please input a integer:");
    scanf("%ld",&n);
    if (n==0)
        printf("n=0");
    else
    {
    while(n!=0)
    {
        a[i]=n%2;
        n=n/2;
        i++;
    }
    printf("n=");
    for(j=i-1;j>=1;j--)
    {
        printf("%d",a[j]);
    }
    }

    return 0;
}
