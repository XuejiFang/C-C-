#include<math.h>
#include <stdio.h>
int GetData(double *p);
double Sum(double *p, int n);
double Sum2(double *p, int n);
int main()
{
   const int N = 20;
   int array[N], n, k=0;

   while((n=GetData(array))!=0)
      if(n%2==0&&Sum2(array,n)<0)
        printf("Case %d: (%d), %.2lf, none\n", ++k, n, Sum(array, n)/n);
      else if(Sum2(array,n)<0)
        printf("Case %d: (%d), %.2lf, %.2lf\n", ++k, n, Sum(array, n)/n, -pow(-Sum2(array,n),1.0/n));
      else
        printf("Case %d: (%d), %.2lf, %.2lf\n", ++k, n, Sum(array, n)/n, pow(Sum2(array,n),1.0/n));
   return 0;
}
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
double Sum(double *p, int n)
{
   double sum=0.0;
   int i;

   for(i=0; i<n; i++)
      sum += p[i];
   return sum;
}
double Sum2(double *p, int n){
    double sum=1.0;
    for (int i=0;i<n;i++){
        sum*=p[i];
    }
    return sum;
}

