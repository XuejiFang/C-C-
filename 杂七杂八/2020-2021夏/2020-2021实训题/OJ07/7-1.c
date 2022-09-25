#include <stdio.h>

int GetData(double *p);

double Ave(const double *p, int n);


int main()
{
   const int N = 20;
   int array[N], n, k=0;

   while((n=GetData(array))!=0)
      printf("Case %d: (%d), %.2lf\n", ++k, n, Ave(array, n));
   return 0;
}

int GetData(double*p)
{
   int n, flag=1;
   char c;
   for(n=0; flag && scanf("%d%c", p+n, &c)==2; n++)
   {
      if(c=='\n') flag=0;
   }
   return n;
}

double Ave(const double *p, int n)
{
   double sum=0.0;
   for(int i=0; i<n; i++)
      sum += p[i];
   return sum/n;
}

