#include <stdio.h>
#include <stdlib.h>
#define FXJ struct node

FXJ
{
  int num;
  FXJ *next;
};


int main()
{
    int n,i;
    scanf("%d",&n);
    FXJ *head=NULL,*p1,*p2;
    p1=head
    ;p2=head;
    p1=(FXJ *)malloc(sizeof(FXJ));
    for(i=1;i<=n;i++)
    {
            p2->next=p1;
            p2=p1;
            p1=(FXJ *)malloc(sizeof(FXJ));
            p1->num=i;


    }

     for(p1=head;p1!=NULL;p1->next)
        printf("%d\n",p1->num);



    return 0;
}
