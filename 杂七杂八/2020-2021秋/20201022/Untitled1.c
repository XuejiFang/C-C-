#include <stdio.h>



int main()

{
    int n,i,j,t;
    int maxp,minp;
    int a[9];

    printf("Input n:");
    scanf("%d",&n);
    printf("Input %d integers:",n);

    for(i=0;i<=n-1;i++)  scanf("%d",&a[i]);

    minp=0;maxp=n-1;

    for(i=0;i<=n-1;i++)
    {
        if (a[i]>a[maxp]) maxp=i;
        if (a[i]<a[minp]) minp=i;
    }

    if(minp!=0)
    {
        t=a[0];a[0]=a[minp];
        maxp++;
        for(i=minp;i>=2;i--)
            a[i]=a[i-1];
        a[1]=t;
    }
   if(maxp!=n-1)
    {
        t=a[n-1];a[n-1]=a[maxp];
        for(i=maxp;i<=n-3;i++)
            a[i]=a[i+1];
        a[n-2]=t;
    }
    printf("After swapped:");
    for(i=0;i<=n-1;i++)
        printf("%4d",a[i]);
    return 0;
}


