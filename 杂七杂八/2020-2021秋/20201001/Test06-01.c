#include <stdio.h>

    double x,y,z,max,mid,min;

    int  m1(x,y,z){
        max=x;
        if (y>=max) max=y;
        if (z>=max) max=z;
        return max;
    }

    double m2(x,y,z){
        if (x<=y&&x>=z) mid=x;
        if (y<=x&&y>=z) mid=y;
        if (z<=x&&z>=y) mid=z;
    }

    double m3(x,y,z){
        min=x;
        if (y<=min) min=y;
        if (z<=min) min=z;
        return min;
    }


int main(){

    scanf("%f%f%f",&x,&y,&z);
    max=m1(x,y,z);
    mid=m2(x,y,z);
    min=m3(x,y,z);
    printf("%f%f%f",max,mid,min);

    return 0;
}




