#include <stdio.h>
#include <math.h>

int countdigit(int n,int m)
{
    int sum=0;
    int len;
    int i;
    len=(int)log10(n)+1;
    for(i=1;i<=len;i++)
    {
        if(n%10==m) sum++;
        n/=10;
    }
    return sum;
}

int main()
{
    int n;
    printf("Input an integer:");
    scanf("%d",&n);
    printf("Number of digit 2:");
    printf("%d",countdigit(n,2));
    return 0;
}
