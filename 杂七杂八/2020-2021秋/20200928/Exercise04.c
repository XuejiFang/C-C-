#include <stdio.h>

int main(){

    char a,b;
    printf("Input a lowercase letter:");
    a=getchar();
    b=a-32;
    printf("A capital letter:");
    putchar(b);



    return 0;
}
