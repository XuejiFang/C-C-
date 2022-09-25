#include <stdio.h>

int main(){

    double x,y,z;
    scanf("%lf%lf%lf",&x,&y,&z);

    if (x+y<=z||y+z<=x||z+x<=y)

        printf("not triangle\n");
    else
        if (x==y&&y==z)
            printf("equilateral triangle\n");
        else if (x==y||y==z||x==z)
            printf("isosceles triangle\n");
        else if (x*x+y*y==z*z||x*x+z*z==y*y||y*y+z*z==x*x)
            printf("right triangle\n");
        else
            printf("arbitrary triangle\n");

    return 0;
}
