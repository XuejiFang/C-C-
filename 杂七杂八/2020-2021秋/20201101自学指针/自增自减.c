#include <stdio.h>

int main()
{
    int a=0;
    int *p=&a;
    printf("%x\n",p);
    printf("%x %x",++p,p);
    return 0;
}
