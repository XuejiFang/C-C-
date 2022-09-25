#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *createList()
{
    struct Node *headNode=(struct Node*)malloc(sizeof(struct Node));
    headNode->next=NULL;
    return headNode;
}

struct Node *createNode(int data)
{
    struct Node *newNode=(struct Node *)malloc(sizeof(struct Node));
    newNode->data=data;
    newNode->next=NULL;
    return newNode;
}

void printList(struct Node*headNode)
{
    struct Node *pMove=headNode->next;
    while(pMove)
    {
        printf("%d",pMove->data);
        pMove=pMove->next;
    }
    printf("\n");
}

void insertNodeByHead(struct Node *headNode,int data)
{
    struct Node *newNode=createNode(data);
    newNode->next=headNode->next;
    headNode->next=newNode;
}

void deleteNodeByAppoint(struct Node *headNode,int posData)
{
    struct Node *posNode=headNode->next;
    struct Node *posNodeFront=headNode;
    if(posNode==NULL)
        printf("链表为NULL，无法删除");
    else
    {
        while(posNode->data!=posData)
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
    struct Node *list=createList();
    insertNodeByHead(list,1);
    insertNodeByHead(list,2);
    insertNodeByHead(list,3);
    deleteNodeByAppoint(list,2);
    printList(list);
    return 0;
}
