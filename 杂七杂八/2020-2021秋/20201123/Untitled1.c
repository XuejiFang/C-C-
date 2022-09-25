#include <stdio.h>
#include <string.h>
void main()
{
   char str[100],*p,*q,*r;
   gets(str);
   for(p=str;*p!='\0';p++)
   {
      for(q=r=p;*q!='\0';q++)
         if(*r>*q)
             r=q; /***/
      if(r!=p)
      {
         char c=*r;
         *r=*p;
         *p=c;
      }
   }
   for(p=str;*p!='/0';p++)
   {
      for(q=p;*p==*q;q++);
      strcat(p+1,q);
   }
   printf("%s\n",str);
}


