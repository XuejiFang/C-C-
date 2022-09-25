#include <stdio.h>

int main()
{
    int m,n,max,t;
    int i,j,k;
    int a[21],b[21],c[21];
    scanf("%d",&m);
    for(i=1;i<=21;i++) c[i]=0;
    for (i=1;i<=m;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        scanf("%d",&b[i]);
    }
    k=1;
    for (i=1;i<=m;i++)
    {
        for (j=1;j<=n;j++)
        {
            if (a[i]==b[j])
            {
                c[k]=a[i];
                k++;
            }
        }
    }

    if(k==1)
        printf("No Intersection");
    else
    {
        for (i=1;i<=k-2;i++)
        {
            for (j=i+1;j<=k-1;j++)
            {
                if (c[i]<c[j])
                {
                    t=c[i];
                    c[i]=c[j];
                    c[j]=t;
                }
            }
        }

        for(i=1;i<=k-1;i++)
        {
            printf("%d ",c[i]);
        }
    }
    return 0;
}
