#include <stdio.h>

int main(){

    int a;
    printf("��������ݣ�");
    scanf("%d",&a);

    if (a%4==0 && a%100!=0 || a%400==0)
        printf("%d��������",a);
    else
        printf("%d�겻������",a);

    /*if (a % 400 == 0)
        printf("%d ��������",a);
    else if (a % 4 == 0 && a % 100 != 0)
        printf("%d��������",a);
    else
        printf("%d�겻������",a); */

    return 0;
}
