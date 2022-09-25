#include <stdio.h> 
int zeros(int n)
{
   int m=0,p=5;
   while(p<=n)
   {
      m += n/p;
      p *= 5;
   }
   return m;
}

int main()
{
   int n,k=0;
   while(scanf("%d", &n)==1)
   {
      printf("Case %d: %d, %d\n", ++k, n, zeros(n));
   }
   return 0;
}
