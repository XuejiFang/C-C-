#include <stdio.h>
#include <math.h>
int len(int n)
{
    int length=1;
    while((n/=10)!=0) length++;
}

int res(int n)
{
    int length=len(n);
    int wei;
    wei=(int)pow(10.0,length-1);
    if(n/10==0)
        return n;
    else
        return (n%10)*wei+res(n/10);
}



int main( )
{
   int n,m;
   printf("Enter n:");
   scanf("%d",&n);
   int flag;
   flag = n < 0 ? -1 : 1;
   if(n< 0) n=-n;
   m=flag*res(n);
   printf("%d",m);
   return 0;
}



