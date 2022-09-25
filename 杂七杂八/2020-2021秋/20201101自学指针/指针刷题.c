#include <stdio.h>

int main()
{
    char *a="abc";
    printf("%s\n",a);
    printf("%c",*(a+1));
    return 0;
}
