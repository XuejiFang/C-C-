#include<stdio.h>
int main()
{
    int n,a[10000];
    int i,j=1,k=0,m=1;
    printf("Input n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
       a[i]=i;
    while(k<n-1)
    {
        for(i=1;i<=n;i++)
        {

           for(j=m;j<=3;)
            {
                 if(a[i]!=0)
                 {
                    a[i]=j;
                   m++;
                   if(m==4)
                   {
                     m=1;
                   }
                 }
                break;
            }

           if(a[i]==3)
           {
             a[i]=0;
             k++;
           }
        }
    }
    for(i=1;i<=n;i++)
    {
        if(a[i]!=0)
          printf("Last No. is:%d",i);
    }
}
