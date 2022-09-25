#include <stdio.h>



int main()

{

    int a[9],b[9];

    int i,j,x,n;

    for(i=0;i<=9;i++)

    {

        scanf("%d",&a[i]);

    }

    scanf("%d",&x);

    j=0;

    for(i=0;i<=9;i++)

    {

        if(a[i]==x)

        {

            b[j]=i;

            j++;

        }

    }

    n=j-1;



    if(n!=-1)

    {

        printf("Index is:");

        for(j=0;j<=n;j++)

        {

            printf("%3d",b[j]);

        }

    }

    else

        printf("Not Found");



    return 0;

}

