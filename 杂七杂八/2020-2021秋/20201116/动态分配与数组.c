#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    //int *p;
    char *p;
    scanf("%d",&n);
    //p=(char *)malloc(n*sizeof(char));
    p=(char *)calloc(n+1,sizeof(char));

    for(int i=1;i<=n+1;i++)
        scanf("%c",p+i-1);
    for(int i=1;i<=n+1;i++)
        //printf("%d ",p[i-1]);
        printf("%c",*(p+i-1));


    return 0;
}
