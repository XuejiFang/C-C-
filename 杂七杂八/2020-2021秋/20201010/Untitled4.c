#include <stdio.h>
#include <math.h>

int main(){

    int day,i;
    double poor,rich;
    scanf("%d",&day);
    for (i=0;i<=day;i++)
    {
        poor=poor+0.01*pow(2.0,i-1);
        rich=100000*i;

    }
    printf("%.0lf\n%.0lf",rich,poor);





    return 0;
}
