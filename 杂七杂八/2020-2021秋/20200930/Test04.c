#include <stdio.h>

int main(){

    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    switch(n)
    {
    case 1:
        printf("111\n");  break;
    case 2:
        printf("222\n");  break;
    case 3:
        printf("333\n");  break;
    case 4:
        printf("444\n");  break;
    default :
        printf("error\n");
    }



    return 0;
}
