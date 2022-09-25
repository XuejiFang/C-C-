#include <stdio.h>

int main()
{
    double a[12],sum,t;
    int i,j,b[12];
    sum=0.0;
    for(i=1;i<=12;i++)
    {
        scanf("%lf",&a[i]);
        sum+=a[i];
    }
    for(i=1;i<=12;i++)
    {
        b[i]=(int)(a[i]/sum*100.0+0.5);
    }
    for(i=1;i<=12;i++)
    {
        printf("%2d(%2d%%)",i,b[i]);
        for(j=1;j<=b[i];j++)
        {
            printf("#");
        }
        printf("\n");
    }

    return 0;
}
