 #include <stdio.h>
 #include <string.h>

 int main(){

     int len,i=1;char y;
     scanf("%s",y);
     len=sizeof(y);
     while(1)
     {
         if (mid(y,len-i+1,1)!=mid(y,i,1))
         {
             printf("%s不是回文数",y);
             break;
         }
         if (len-i+1>=i)
         {
             printf("%s是回文数",y);
             break;
         }
     }



    return 0;
 }
