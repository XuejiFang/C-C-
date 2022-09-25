#include <stdio.h>
int main()
{
   int i, n, k=0;
   double x, max;
   while(scanf("%d", &n)==1)
   {
      printf("Case %d: ", ++k);
      scanf("%lf", &max);
      for(i=1; i<n; i++)
      {
         scanf("%lf", &x);
         if(x>max)
            max = x;
      }
      printf("%.1f\n", max);
   }
   return 0;
}

