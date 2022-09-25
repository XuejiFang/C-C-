#include <stdio.h>

int main()
{
    int n;
    int i,j;
    int a[100],b[100];
    int max=1;
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<=100;i++)
    {
        b[i]=0;
    }

    for (i=1;i<=n;i++)
    {
        for (j=i+1;j<=n;j++)
        {
            if(a[i]==a[j]) b[i]++;
        }
    }

    for (i=1;i<=n;i++)
    {
        if(b[i]>max) max++;
    }
    printf("%d",max);
    for (i=1;i<=n;i++)
    {
        if(b[i]==max)
        {
            printf("%d %d\n",a[i],max);
        }
    }

    return 0;
}
