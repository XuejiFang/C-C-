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
#define NUM 12 //��ŵ�Ԫ���ã�Ϊ�ж�˫�˶����Ƿ��������涨
// ��frontָ��==backָ�����frontָ����back
//ָ���һλ���ж�Ϊ�������������������˵ʵ��
//�ռ�ΪNUM - 2.ע�⣡
#define Elemtype int  //�ɸ���Ԫ������
//--------------ѭ������-----------
typedef struct deQueue
{
    Elemtype* base;
    int front;
    int back;
} deQueue;
void init(deQueue& Q)
{
    Q.base = (Elemtype*)malloc(sizeof(Elemtype) * NUM);
    Q.back = Q.front = 1;//0�Ų��ã��ж϶����Ƿ���������
}
//------------���й��ܺ���-------------
//�ⲿ���㷨���ܼ򵥣��Ͳ���ϸд��

//�������
int push_front(deQueue& Q, int x)
{
    if (Q.front < Q.back)
        if (Q.front == 1)
            if (Q.back == NUM - 1)  return 1;//��
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
            if (Q.front == Q.back + 1) //�ж��Ƿ���
                return 1;//��
            else {
                --Q.front;
                Q.base[Q.front] = x;
            }
        }
    return 0;
}

//��β���
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
            if (Q.front == 1) return 1;//��
            else {
                Q.back = 1;
                Q.base[Q.back] = x;
            }
        else  Q.base[Q.back++] = x;

    else
        if (Q.back + 1 == Q.front) return 1;//����
        else Q.base[Q.back++] = x;
    return 0;
}

//��������
int pop_front(deQueue& Q)
{
    if (Q.front == Q.back) return 1;//��
    else if (Q.front < Q.back) ++Q.front;
    else
        if (Q.front == NUM - 1) Q.front = 1;
        else ++Q.front;
    return 0;
}

//������β
int pop_back(deQueue& Q)
{
    if (Q.back > Q.front) --Q.back;
    else if (Q.back == Q.front) return 1;//�ѿ�
    else
        if (Q.back == 1) Q.back = NUM - 1;
        else --Q.back;
    return 0;
}

//��ӡ
void print_queue(deQueue& Q)
{
    int n;
    if (Q.front == Q.back) {
        cout << "empty!" << endl;
        return;
    }
    else if (Q.front < Q.back) {
        cout << "��������Ϊ: " << endl;
        for (n = Q.front; n < Q.back; ++n)
        {
            cout << Q.base[n] << " ";
        }
        cout << endl;
    }
    else {
        cout << "��������Ϊ: " << endl;
        for (n = Q.front; n < NUM; ++n) cout << Q.base[n] << " ";
        for (n = 1; n < Q.back; ++n) cout << Q.base[n] << " ";
        cout << endl;
    }
}

int mainnn()
{
    deQueue Q;
    init(Q);//��ʼ��
    int choose;
    // int data;
    cout << "����1�ڶ��׼���Ԫ��" << endl
        << "����2�ڶ�β����Ԫ��" << endl
        << "����3�ڶ���ɾ��Ԫ��" << endl
        << "����4�ڶ�βɾ��Ԫ��" << endl
        << "����5�˳�" << endl;
    while (1)
    {
        cin >> choose;
        switch (choose)
        {
        case 1:
            cout << "Ҫ�ڶ������һ��23֮��Ķ���Ϊ��" << endl;
            // cin >> data;
            if (push_front(Q, 23) == 1)
                cout << "����������" << endl;
            print_queue(Q);
            break;
        case 2:
            cout << "Ҫ�ڶ�β���һ��12֮��Ķ���Ϊ��" << endl;
            // cin >> data;
            if (push_back(Q, 12) == 1)
                cout << "����������" << endl;
            print_queue(Q);
            break;
        case 3:
            cout << "ɾ������Ԫ�غ�Ķ���Ϊ��" << endl;
            pop_front(Q) == 1;
            print_queue(Q);
            break;
        case 4: 
            cout << "ɾ����βԪ�غ�Ķ���Ϊ��" << endl;
            pop_back(Q) == 1;
            print_queue(Q);
            break;
        default:
            goto loop;//�˳�����
        }
    }
loop:
    system("pause");
    return 0;
}
