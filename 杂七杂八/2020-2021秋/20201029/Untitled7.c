#include <stdio.h>
#include <string.h>

void search(int a[],int n,int x)
{
    int i;
    for (i=1;i<=n;i++)
    {
        if(a[i]==x)
        {
            printf("index=%d\n",i-1);
            break;
        }
    }
    if(i>n) printf("Not found\n");
}


int main()
{
    int i,n,x;
    int a[11];
    printf("Enter n:");
    scanf("%d",&n);
    printf("Input %d integers:",n);
    for(i=1;i<=n;i++) scanf("%d",&a[i]);
    printf("Input x:");
    scanf("%d",&x);
    search(a,n,x);
    return 0;
}
