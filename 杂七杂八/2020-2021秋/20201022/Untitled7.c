#include <stdio.h>

int main()
{
    int n,i,j,max,m;
    int a[100],b[999],c[100],d[100];
    scanf("%d",&n);
    for(i=1;i<=999;i++)
    {
        b[i]=0;
    }
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<=n;i++)
    {
        b[a[i]]++;
    }
    max=0;
    for(i=1;i<=999;i++)
    {
       if(b[i]>max) max=b[i];
    }
    j=1;
    for(i=1;i<=100;i++)
    {
       if(b[i]==max)
       {
           c[j]=b[i];
           j++;
       }
    }
    m=j-1;
    for(j=1;j<=m;j++)
    {
        printf("%d %d\n",c[j],max);
    }

    return 0;
}
