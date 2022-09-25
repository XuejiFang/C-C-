#include <stdio.h>
int main()
{
int n,m;
int i=1,ejz=0;
int ys=0;
printf("Please input a integer:",m);
scanf("%d",&m);
do
{ys=ys*10+m%2;
m/=2;
}
while(m>=0);
    if(m=1)
    ejz+=i*m;
printf("n=%d",ejz);

return 0;
}
