#include <stdio.h>

int main(){

    int a;
    printf("Input a number:");
    scanf("%d",&a);
    printf("%d %d %d",a/100,a/10%10,a%10);



    return 0;
}
