#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct node
    {
        int num;
        struct node *next;
    }*head,*tail,*p;
    int i=1,n;
    scanf("%d",&n);
    p=(struct node *)malloc(sizeof(struct node));
    for(p=head;p<=node+n;p++)
    {
        p->num=i;
        i++;
    }
    //del(p);
    printf("%d",(p+1)->num);
    return 0;
}
/*
void del(int *p)
{
    head=p;
    n=head->next;
    m=n->next;
    while(head->next!='\0')
    {
        for(int i=1;i<=n;i++)
            if(i%3==0)
                (p+i)->next=


    }

}
*/

