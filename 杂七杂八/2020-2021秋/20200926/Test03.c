#include <stdio.h>

int main(){
    int a=3,b=4,c=5,x,y;
    !(x=a)&&(y=b)&&0;
    printf("%d %d",x,y);
    return 0;
}
