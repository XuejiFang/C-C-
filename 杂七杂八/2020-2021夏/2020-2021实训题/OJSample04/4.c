// OJsample04.c	�������ɸ��������������ܺ�
#include <stdio.h>

int GetData(int *p);
// ��ȡ���ݴ�pָ���ĵ�ַ����ʼ��ţ����ض�ȡ�����ݸ���
int Sum(const int *p, int n);
// ����������Ҫ��(�������͡���ʼ��ַ��Ԫ�ظ���)�����㲢����Ԫ��֮��

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
   {			// ע��˴�"%d%c"�м䲻Ҫ����ո�
      if(c=='\n') flag=0;
   } 		// ע��˴���Ҫ��break��������ִ��һ�α��ʽ3��n++��
   return n;
}

int Sum(const int *p, int n)
{
   int sum=0, i;

   for(i=0; i<n; i++)
      sum += p[i];
   return sum;
}


