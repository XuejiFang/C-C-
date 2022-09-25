#include <stdio.h>

int main()
{
    char *p[]={"shanghai","beijing","hongkong"};
    printf("%c",*(p[1]+3));
    return 0;
}
