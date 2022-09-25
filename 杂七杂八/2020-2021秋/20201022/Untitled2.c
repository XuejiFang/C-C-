#include <stdio.h>

int main()
{
    int n,i,j;
    int a[99999];
    printf("Input n:");
    scanf("%d",&n);

    for (i=1;i<=n*n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf("%4d",a[(i-1)*n+j]);
        }
        printf("\n");
    }

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i>=j) printf("%4d",a[(i-1)*n+j]);
        }
        printf("\n");
    }


    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i<=j)
                printf("%4d",a[(i-1)*n+j]);
            else
                printf("    ");
        }
        printf("\n");
    }
    return 0;
}
