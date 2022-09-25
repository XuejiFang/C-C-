#include<iostream>
#include<iomanip>
using namespace std;

const int MAX = 10;
typedef int ElemType;

class Deque    
{
private:
	int size;
	ElemType* base;
	int left, right;  //0�������left��1�����Ҷ�right
public:
	Deque();
	~Deque()
	{
		delete[]base;
	}
	int getSize()
	{
		return size;
	}
	bool empty()
	{
		return left == right;
	}
	bool full()
	{
		return (left - 1 + MAX) % MAX == right;
	}
	bool topAt(ElemType&, int);
	bool pushAt(ElemType, int);
	bool popAt(int);
	void print(int);
	void clear();
};
Deque::Deque()
{
	base = new ElemType[MAX];
	left = right = 0;
	size = 0;
}
bool Deque::topAt(ElemType& data, int end)
{
	if (empty())
		return false;
	if (end == 0)
		data = base[left];
	else
		data = base[(right - 1 + MAX) % MAX];
	return true;
}
bool Deque::pushAt(ElemType data, int end)
{
	if (full())
		return false;
	if (end == 0)
	{
		left = (left - 1 + MAX) % MAX;
		base[left] = data;
	}
	else
	{
		base[right] = data;
		right = (right + 1) % MAX;
	}
	return true;
}
bool Deque::popAt(int end)
{
	if (empty())
		return false;
	if (end == 0)
		left = (left + 1) % MAX;
	else
		right = (right - 1 + MAX) % MAX;
	return true;
}
void Deque::print(int end)
{
	if (empty())
	{
		cout << "�ն��У��޷�������" << endl;
		return;
	}
	if (end == 0)
	{
		int i = left;
		while (i != right)
		{
			cout << setw(4) << base[i];
			i = (i + 1) % MAX;
		}
	}
	else
	{
		int i = right;
		while (i != left)
		{
			i = (i - 1 + MAX) % MAX;
			cout << setw(4) << base[i];
		}
	}
	cout << endl;
}
void Deque::clear()
{
	left = right = 0;
	size = 0;
}
void check(int& end)
{
	while (cin >> end && !(end == 0 || end == 1))
	{
		cout << "�˺Ų���ȷ����һ�����룺";
	}
}
void input(Deque& deque)
{
	int end;
	cout << "��ָ������ӣ�0��ˣ�1�Ҷˣ�";
	check(end);
	ElemType data;
	cout << "�������ݡ�����0����" << endl;
	while (cin >> data && data)
	{
		deque.pushAt(data, end);
	}
}
void traverse(Deque& deque)
{
	int end;
	cout << "��ָ���˱�����";
	check(end);
	deque.print(end);
}
int main()
{
	cout << "******˫�˶�������******" << endl;
	Deque deque;
	cout << "�½�˫�˶���" << endl;
	cout << "�����Ƿ�Ϊ�գ�";
	deque.empty() ? cout << "Yes!" << endl : cout << "No!" << endl;
	cout << "����Ϊ�������޵����(�Դӱ�β����Ϊ��)��" << endl;
	input(deque);
	cout << "��������ޣ�" << endl;
	traverse(deque); 
	traverse(deque);
	cout << "��ն��У�";
	deque.clear();
	deque.empty() ? cout << "Yes!" << endl : cout << "No!" << endl;
	cout << "���ԣ������������޵�˫�˶��еõ�����������������޵�˫�˶��еõ���������п���Ϊ��4��1��3��2\n"<<endl;
	cout << "����Ϊ������޵����(�Դӱ�ͷ����Ϊ��)��" << endl;
	input(deque);
	input(deque);
	input(deque);
	input(deque);
	traverse(deque);
	cout << "���������������ʱ�����н��������ʾ��\n���ԣ�����������޵�˫�˶��еõ������������������޵�˫�˶��еõ���������п���Ϊ��4��2��1��3\n" << endl;
	cout << "��ն��У������Ƿ�Ϊ�գ�";
	deque.clear();
	deque.empty() ? cout << "Yes!" << endl : cout << "No!" << endl;
	system("pause");
	return 0;
}