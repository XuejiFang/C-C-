#include <stdio.h>
#include <math.h>


int main(){

    long x,n,i;
    long a,b;
    i=0;
    scanf("%d",&x);
    n = (int)(log((double)x)/log((double)10)) + 1;

    while(1)
    {
        n--;
        i++;
        a=pow(10.0,n);
        b=pow(10.0,i-1);
        if (n+1==2)
        {
            printf("%d不是回文",x);
            break;
        }
        if ((x/a%10)!=(x/b%10))
        {
            printf("%d不是回文",x);
            break;

        }

        if (n<i)
        {
            printf("%d是回文",x);
            break;
        }
    }


    return 0;
}
