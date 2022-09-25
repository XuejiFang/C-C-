#include <stdio.h>



int fib(int n)

{

    int a[5000]={1,1};

    int i,j,k;

    for(i=2;i<=n;i++)   a[i]=a[i-1]+a[i-2];

    return a[n-1];

}



int main()

{

    int m,n;

    int i,flag=0;

    printf("Input m:");

    scanf("%d",&m);

    printf("Input n:");

    scanf("%d",&n);

    for(i=0;fib(i)<=n;i++)

    {

        if(fib(i)>=m)

        {

            printf("%d\n",fib(i));

            flag=1;

        }



    }

    if(flag==0) printf("Not Found\n");

    return 0;

}

​
