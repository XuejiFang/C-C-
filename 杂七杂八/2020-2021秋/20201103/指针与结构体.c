#include <stdio.h>

struct node
{
    int num;
    char name[20];
}stu[2]={101,"wang",102,"li"},*p=stu+1;

int main()
{
    printf("%c",p->name[1]);
    return 0;
}
