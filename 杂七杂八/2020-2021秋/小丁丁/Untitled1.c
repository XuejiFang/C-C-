
#include <stdio.h>
#include <string.h>
#include <math.h>

void tq(char *s)
{
char *p;
p=s;
for(;*s!='\0';s++)
{
    if(*s<='9'&&*s>='0')
        {
            *p=*s;
            p++;
        }

}
*p='\0';
}
int main()
{
int i;
int n=0;
char str[100];
printf("Enter a string:");
gets(str);
tq(str);
for(i=0;str[i]!='\0';i++)
n=n*10+str[i]-'0';

printf("digit=%d,%d",n,2*n);



return 0;
}
