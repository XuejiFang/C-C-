#include <iostream>
using namespace std;

int GetData(int *p);

int Sum(const int *p, int n);


int main()
{
   const int N = 1024;
   int array[N], n, k=0;

   while((n=GetData(array))!=0)
      cout<<"Case "<<++k<<": "<<n<<", "<<Sum(array,n)<<endl;//\n", ++k, n, Sum(array, n));
   return 0;
}

int GetData(int *p)
{
   int n=0, flag=1;
   char c;
   /*
   for(n=0; flag && scanf("%d%c", p+n, &c)==2; n++)
   {
      if(c=='\n') flag=0;
   }
   */
   cin>>*(p+n)>>c;
   while(c!='\n'){
    n++;
    cin>>*(p+n)>>c;
   }
   return n;
}

int Sum(const int *p, int n)
{
   int sum=0, i;

   for(i=0; i<n; i++)
      sum += p[i];
   return sum;
}
