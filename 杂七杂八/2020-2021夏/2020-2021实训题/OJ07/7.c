#include<stdio.h>

int GetData(double *p)
{
   int n, flag=1;
   char c;
   for(n=0; flag && scanf("%lf%c", p+n, &c)==2; n++)
   {
      if(c=='\n') flag=0;
   }
   return n;
}

double Ave(const int *p, int n)
{
   double sum=0.0;
   int i;
   for(i=0; i<n; i++)
      sum += p[i];
   return sum/n;
}

int main(){
    double a[20],n,k=0;
    while((n=GetData(a))!=0)
        printf("Case %d: (%d), %.2lf\n", ++k, n, Ave(a, n));
    return 0;
    return 0;
}
