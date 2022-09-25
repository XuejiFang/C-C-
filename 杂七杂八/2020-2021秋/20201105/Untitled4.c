#include <stdio.h>
#include <math.h>

int flag=0;

void shift(int n)
{
    while(n!=0)
    {
        if (n%10==0&&flag==0)
            return shift(n/10);
        else
        {
            printf("%d",n%10);
            flag=1;
            return shift(n/10);
        }
    }
}


int main( )
{
   int n,m;
   printf("Enter n:");
   scanf("%d",&n);
   int flag;
   flag = n < 0 ? -1 : 1;
   if(n< 0)
   {
       n=-n;
       printf("-");
   }
   if(n==0)
        printf("0");
   else
        shift(n);

   return 0;
}




