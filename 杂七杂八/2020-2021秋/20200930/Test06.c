#include <stdio.h>
#include <stdlib.h>

int main(){

    double x,y,z;
    scanf("%f%f%f",&x,&y,&z);

    if (x+y<=z||x+z<=y||y+z<=x)
        printf("not triangle");
        exit(0);

    if (x==y&&y==z)
        printf("equilateral triangle");
    else
        if (x==y||y==z||x==z) printf("isosceles triangle");






    return 0;
}
