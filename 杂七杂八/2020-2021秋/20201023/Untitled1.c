#include <stdio.h>

int main()
{
    int n,max,m,t;
    int i,j;
    int a[101],b[101],c[101];
    max=1;m=0;
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        b[i]=0;
    }
    for (i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }

    for (i=1;i<=n;i++)
    {
        for (j=i+1;j<=n;j++)
        {
            if (a[i]==a[j]) b[i]++;
        }
    }

    for (i=1;i<=n;i++)
    {
        if (b[i]>max) max=b[i];
    }
    j=1;
    for (i=1;i<=n;i++)
    {
        if(b[i]==max)
        {
            c[j]=a[i];
            j++;
            m++;
        }

    }

    for (i=1;i<=m;i++)
    {
        for (j=i+1;j<=m;j++)
        {
            if (c[i]>c[j]) t=c[i];c[i]=c[j];c[j]=t;
        }
    }

    for (i=1;i<=m;i++)
    {
        printf("%d %d\n",c[i],max+1);
    }
    return 0;
}

