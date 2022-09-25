#include <stdio.h>

int main()
{
    int n,i,m,x,t;
    int a[9];
    printf("Enter n:");
    scanf("%d",&n);
    printf("Enter %d integers:",n);
    for(i=0;i<=n-1;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter insert integer:");
    scanf("%d",&x);

    i=0;
    while(n>a[i])
    {
        i++;
    }
    t=a[i];a[i]=x;
    m=i;
    for(i=n;i>m+1;i--)
    {
        a[i]=a[i-1];
    }
    a[m+1]=t;
    for(i=0;i<=n;i++)
    {
        printf("%4d",a[i]);
    }
    return 0;
}
