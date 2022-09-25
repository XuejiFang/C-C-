#include <stdio.h>

int sum(int a[2][14],int i,int j)
{
    int totel=0;
    for (int k=1;k<=j;k++) totel+=a[i][k];
    return totel;
}

void days(int y,int day)

{
    int m,d;
    int a[2][14]={{0,31,29,31,30,31,30,31,31,30,31,30,31,1},{0,31,28,31,30,31,30,31,31,30,31,30,31,1}};
    int i,j;
    if(y%400==0||y%4==0&&y%100!=0)
        i=0;
    else
        i=1;
    for(j=1;j<=13;j++)
    {
        if(sum(a,i,j)==day)
        {
            m=j;
            d=a[i][j];
            break;
        }
        else if(sum(a,i,j)>day)
        {
            m=j;
            d=day-sum(a,i,j-1);
            break;
        }
    }
    printf("%d-%d-%d",y,m,d);
}

int main()
{
    int y,m,d,day;
    scanf("%d %d",&y,&day);
    days(y,day);
    return 0;
}

