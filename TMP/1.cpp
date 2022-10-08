#include<stdio.h>
int main()
{
    char x,ans;
    printf("Enter one character:");
    scanf("%c",&x);
    if('a'<=x && x<='z')
        ans=x-32;
    else if('A'<=x && x<='Z')
        ans=x+32;
    else
        ans=x;
    printf("%c",ans);
    return 0;
}
