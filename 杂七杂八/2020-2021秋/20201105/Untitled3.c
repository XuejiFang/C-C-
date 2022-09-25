#include <stdio.h>

void change(int a[],int n,int b[],int m)
{
    int c[200];
    int i=0,j=0,k=0;
    while(k<=n+m-1)
    {
        if(i<=n-1&&j<=m-1)
        {
            if(a[i]<b[j])
            {
                c[k]=a[i];
                i++;
            }
            else
            {
                c[k]=b[j];
                j++;
            }
        }
        else if(i>n-1&&j<=m-1)
        {
            c[k]=b[j];
            j++;
        }
        else if(j>m-1&&i<=n-1)
        {
            c[k]=a[i];
            i++;
        }
        k++;
    }

    for (int i=0;i<=n+m-1;i++) printf("%4d",c[i]);

}



int main()
{
    int n,m;
    int a[99],b[99];
    printf("Enter n:");
    scanf("%d",&n);
    printf("Enter %d integers:",n);
    for (int i=0;i<n;i++) scanf("%d",&a[i]);
    printf("Enter m:");
    scanf("%d",&m);
    printf("Enter %d integers:",m);
    for (int i=0;i<m;i++) scanf("%d",&b[i]);
    change(a,n,b,m);
    return 0;
}
