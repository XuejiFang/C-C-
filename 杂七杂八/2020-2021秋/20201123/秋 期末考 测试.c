#include <stdio.h>
#include <string.h>

int main()
{
    int m,n;
    int *a,*b;
    a=&m;
    b=&n;
    if(a>b)
    printf("%0x",*a);


    return 0;
}
