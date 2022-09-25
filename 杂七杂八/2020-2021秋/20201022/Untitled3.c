#include <stdio.h>

int main()
{
    int n,i,j,t;
    int a[9999];
    t=1;
    printf("Input n:");
    scanf("%d",&n);
    printf("Input array:\n");
    for(i=1;i<=n*n;i++) scanf("%d",&a[i]);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i>j&&a[(i-1)*n+j]!=0)    t=0;
        }
    }
    if(t==1)
        printf("YES");
    else
        printf("NO");

    return 0;
}
