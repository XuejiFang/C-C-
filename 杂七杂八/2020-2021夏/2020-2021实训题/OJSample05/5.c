#include <stdio.h>

int sum(const char *str)
{
   int i, s = 0;
   for(i=0; str[i]; i++)
   {
      if(str[i]>='a' && str[i]<='z')
         s += str[i] - 'a' + 1;
      else if(str[i]>='A' && str[i]<='Z')
         s += str[i] - 'A' + 1;
   }
   return s;
}

int main()
{
   char str[1000];
   int k,n;
   scanf("%d", &n);
   gets(str);
   for(k=1; k<=n; k++)
   {
      gets(str);
      printf("Case %d: %s = %d\n", k, str, sum(str));
   }
   return 0;
}

