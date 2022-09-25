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

struct Node *createNode(struct stu data)
{
    struct Node *newNode=(struct Node *)malloc(sizeof(struct Node));
    newNode->data=data;
    newNode->next=NULL;
    return newNode;
}

void printList(struct Node*headNode)
{
    struct Node *pMove=headNode;
    printf("name\tnum\tmath\n");
    while(pMove)
    {
        printf("%s\t%d\t%d\n",pMove->data.name,pMove->data.num,pMove->data.math);
        pMove=pMove->next;
    }
}

void insertNodeByHead(struct Node *headNode,struct stu data)
{
    struct Node *newNode=createNode(data);
    newNode->next=headNode;
    headNode=newNode;
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


void deleteNodeByAppointNum(struct Node *headNode,int num)
{
    struct Node *posNode=headNode->next;
    struct Node *posNodeFront=headNode;
    if(posNode==NULL)
        printf("����ΪNULL���޷�ɾ��");
    else
    {
        while(posNode->data.num!=num)
        {
            posNodeFront=posNode;
            posNode=posNodeFront->next;
            if(posNode==NULL)
            {
                printf("û���ҵ����data");
                return ;
            }
        }
        posNodeFront->next=posNode->next;
        free(posNode);
    }

}


int main()
{
    struct stu info;
    struct Node *headNode,*tailNode;
    headNode=tailNode=NULL;
    while (1)
    {
        printf("������ѧ����������ѧ�š��ɼ�");
        scanf("%s%d%d",info.name,&info.num,&info.math);
        insertNodeByTail(headNode,tailNode,info);
        printf("�Ƿ������(Y/N)");
        setbuf(stdin,NULL);
        char choice=getchar();
        if(choice=='N')
            break;
    }
    printf("%d",headNode->data.math);
    //printList(headNode);

    return 0;
}
