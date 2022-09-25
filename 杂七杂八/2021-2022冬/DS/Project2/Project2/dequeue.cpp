#include<iostream>
#include<stdlib.h>
#include<windows.h>
#include<vector>
#include<iomanip>
#include<stdlib.h>
#include<string>
#include<math.h>
//#include<deque>//deque's headfile
using namespace std;
#define NUM 12 //零号单元不用，为判定双端队列是否已满，规定
// 若front指针==back指针或者front指针在back
//指针后一位是判定为队列已满。因此总体来说实际
//空间为NUM - 2.注意！
#define Elemtype int  //可更改元素类型
//--------------循环队列-----------
typedef struct deQueue
{
    Elemtype* base;
    int front;
    int back;
} deQueue;
void init(deQueue& Q)
{
    Q.base = (Elemtype*)malloc(sizeof(Elemtype) * NUM);
    Q.back = Q.front = 1;//0号不用，判断队列是否满更方便
}
//------------队列功能函数-------------
//这部分算法都很简单，就不详细写了

//队首添加
int push_front(deQueue& Q, int x)
{
    if (Q.front < Q.back)
        if (Q.front == 1)
            if (Q.back == NUM - 1)  return 1;//满
            else {
                Q.front = NUM - 1;
                Q.base[Q.front] = x;
            }
        else if (Q.front == Q.back)
            if (Q.front == 1) {
                Q.front = NUM - 1;
                Q.base[Q.front] = x;
            }
            else {
                --Q.front;
                Q.base[Q.front] = x;
            }
        else {
            if (Q.front == Q.back + 1) //判断是否满
                return 1;//满
            else {
                --Q.front;
                Q.base[Q.front] = x;
            }
        }
    return 0;
}

//队尾添加
int push_back(deQueue& Q, int x)
{
    if (Q.front == Q.back)
        if (Q.back == NUM - 1) {
            Q.base[Q.back] = x;
            Q.back = 1;
        }
        else
            Q.base[Q.back++] = x;
    else if (Q.front < Q.back)
        if (Q.back == NUM - 1)
            if (Q.front == 1) return 1;//满
            else {
                Q.back = 1;
                Q.base[Q.back] = x;
            }
        else  Q.base[Q.back++] = x;

    else
        if (Q.back + 1 == Q.front) return 1;//已满
        else Q.base[Q.back++] = x;
    return 0;
}

//弹出队首
int pop_front(deQueue& Q)
{
    if (Q.front == Q.back) return 1;//空
    else if (Q.front < Q.back) ++Q.front;
    else
        if (Q.front == NUM - 1) Q.front = 1;
        else ++Q.front;
    return 0;
}

//弹出队尾
int pop_back(deQueue& Q)
{
    if (Q.back > Q.front) --Q.back;
    else if (Q.back == Q.front) return 1;//已空
    else
        if (Q.back == 1) Q.back = NUM - 1;
        else --Q.back;
    return 0;
}

//打印
void print_queue(deQueue& Q)
{
    int n;
    if (Q.front == Q.back) {
        cout << "empty!" << endl;
        return;
    }
    else if (Q.front < Q.back) {
        cout << "队列内容为: " << endl;
        for (n = Q.front; n < Q.back; ++n)
        {
            cout << Q.base[n] << " ";
        }
        cout << endl;
    }
    else {
        cout << "队列内容为: " << endl;
        for (n = Q.front; n < NUM; ++n) cout << Q.base[n] << " ";
        for (n = 1; n < Q.back; ++n) cout << Q.base[n] << " ";
        cout << endl;
    }
}

int mainnn()
{
    deQueue Q;
    init(Q);//初始化
    int choose;
    // int data;
    cout << "输入1在队首加入元素" << endl
        << "输入2在队尾加入元素" << endl
        << "输入3在队首删除元素" << endl
        << "输入4在队尾删除元素" << endl
        << "输入5退出" << endl;
    while (1)
    {
        cin >> choose;
        switch (choose)
        {
        case 1:
            cout << "要在队首添加一个23之后的队列为：" << endl;
            // cin >> data;
            if (push_front(Q, 23) == 1)
                cout << "队列已满！" << endl;
            print_queue(Q);
            break;
        case 2:
            cout << "要在队尾添加一个12之后的队列为：" << endl;
            // cin >> data;
            if (push_back(Q, 12) == 1)
                cout << "队列已满！" << endl;
            print_queue(Q);
            break;
        case 3:
            cout << "删除队首元素后的队列为：" << endl;
            pop_front(Q) == 1;
            print_queue(Q);
            break;
        case 4: 
            cout << "删除队尾元素后的队列为：" << endl;
            pop_back(Q) == 1;
            print_queue(Q);
            break;
        default:
            goto loop;//退出程序
        }
    }
loop:
    system("pause");
    return 0;
}
