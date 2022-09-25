// OJsample04.c	计算若干个整数的项数及总和
#include <stdio.h>

int GetData(int *p);
// 读取数据从p指定的地址处开始存放，返回读取的数据个数
int Sum(const int *p, int n);
// 接收数组三要素(数据类型、起始地址、元素个数)，计算并返回元素之和

int main()
{
   const int N = 1024;
   int array[N], n, k=0;

   while((n=GetData(array))!=0)
      printf("Case %d: %d, %d\n", ++k, n, Sum(array, n));
   return 0;
}

int GetData(int *p)
{
   int n, flag=1;
   char c;
   for(n=0; flag && scanf("%d%c", p+n, &c)==2; n++)
   {			// 注意此处"%d%c"中间不要插入空格
      if(c=='\n') flag=0;
   } 		// 注意此处不要用break，否则少执行一次表达式3（n++）
   return n;
}

int Sum(const int *p, int n)
{
   int sum=0, i;

   for(i=0; i<n; i++)
      sum += p[i];
   return sum;
}


