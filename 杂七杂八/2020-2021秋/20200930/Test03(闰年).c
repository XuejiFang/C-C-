#include <stdio.h>

int main(){

    int a;
    printf("请输入年份：");
    scanf("%d",&a);

    if (a%4==0 && a%100!=0 || a%400==0)
        printf("%d年是闰年",a);
    else
        printf("%d年不是闰年",a);

    /*if (a % 400 == 0)
        printf("%d 年是闰年",a);
    else if (a % 4 == 0 && a % 100 != 0)
        printf("%d年是闰年",a);
    else
        printf("%d年不是闰年",a); */

    return 0;
}
