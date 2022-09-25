#include <stdio.h>

int main()
{
   int x, y , z, k=0;
   char op, eq;

   while(scanf("%d %c %d %c %d", &x,&op,&y,&eq,&z)==5)
   {
      printf("Case %d: ", ++k);
      if(    op=='+' && x+y==z|| op=='-' && x-y==z
          || op=='*' && x*y==z|| y!=0 && x%y==0 && x/y==z )
         printf("Yes\n");
      else
         printf("No\n");
   }
   return 0;
}

