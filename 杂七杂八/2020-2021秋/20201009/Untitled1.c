#include <stdio.h>

int main(){

    char c;int ct=0;
    while((c=getchar())!='\n')
    {
       if(c>='0'&&c<='9')
       {
           ct++;
           printf("%c ",c);
       }

    }
    printf("\nThere are %d digits!\n",ct);



    return 0;
}
