#include <stdio.h>
#include <stdlib.h>

struct stu
{
    char name[10];
    int num;
    int math;
};
struct Node
{
    struct stu data;
    struct Node *next;
};

struct Node *createList()
{
    struct Node *headNode=(struct Node*)malloc(sizeof(struct Node));
    headNode->next=NULL;
    return headNode;
}

struct Node *createNode(struct stu data)
{
    struct Node *newNode=(struct Node *)malloc(sizeof(struct Node));
    newNode->data=data;
    newNode->next=NULL;
    return newNode;
}

void printList(struct Node*headNode)
{
    struct Node *pMove=headNode->next;
    printf("name\tnum\tmath\n");
    while(pMove)
    {
        printf("%s\t%d\t%d\n",pMove->data.name,pMove->data.num,pMove->data.math);
        pMove=pMove->next;
    }
    printf("\n");
}

void insertNodeByHead(struct Node *headNode,struct stu data)
{
    struct Node *newNode=createNode(data);
    newNode->next=headNode->next;
    headNode->next=newNode;
}

void insertNodeByTail(struct Node *headNode,struct Node *tailNode,struct stu data)
{
    struct Node *newNode=createNode(data);
    if(headNode==NULL)
        headNode=newNode;
    else
        tailNode->next=newNode;
    tailNode=newNode;
}

void deleteNodeByAppointNum(struct Node *headNode,int posData)
{
    struct Node *posNode=headNode->next;
    struct Node *posNodeFront=headNode;
    if(posNode==NULL)
        printf("链表为NULL，无法删除");
    else
    {
        while(posNode->data.num!=posData)
        {
            posNodeFront=posNode;
            posNode=posNodeFront->next;
            if(posNode==NULL)
            {
                printf("没有找到相关data");
                return ;
            }
        }
        posNodeFront->next=posNode->next;
        free(posNode);
    }

}


int main()
{
    //struct Node *list=createList();
    //struct Node *listtail=(struct Node *)malloc(sizeof(struct Node));
    struct Node *list,*listtail;
    list=listtail=NULL;
    struct stu info;
    while (1)
    {
        printf("请输入学生的姓名、学号、成绩");
        scanf("%s%d%d",info.name,&info.num,&info.math);
        //insertNodeByHead(list,info);
        insertNodeByTail(list,listtail,info);
        printf("是否继续？(Y/N)");
        setbuf(stdin,NULL);
        char choice=getchar();
        if(choice=='N')
            break;
    }
    /*
    int delnum;
    scanf("%d",&delnum);
    deleteNodeByAppointNum(list,delnum);
x
    return 0;
}

