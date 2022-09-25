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
	int left, right;  //0代表左端left，1代表右端right
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
		cout << "空队列，无法遍历！" << endl;
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
		cout << "端号不正确，又一次输入：";
	}
}
void input(Deque& deque)
{
	int end;
	cout << "在指定端入队，0左端，1右端：";
	check(end);
	ElemType data;
	cout << "输入数据。输入0结束" << endl;
	while (cin >> data && data)
	{
		deque.pushAt(data, end);
	}
}
void traverse(Deque& deque)
{
	int end;
	cout << "从指定端遍历：";
	check(end);
	deque.print(end);
}
int main()
{
	cout << "******双端队列演练******" << endl;
	Deque deque;
	cout << "新建双端队列" << endl;
	cout << "队列是否为空：";
	deque.empty() ? cout << "Yes!" << endl : cout << "No!" << endl;
	cout << "以下为输入受限的情况(以从表尾插入为例)：" << endl;
	input(deque);
	cout << "若输出受限：" << endl;
	traverse(deque); 
	traverse(deque);
	cout << "清空队列：";
	deque.clear();
	deque.empty() ? cout << "Yes!" << endl : cout << "No!" << endl;
	cout << "所以，能由输入受限的双端队列得到，但不能由输出受限的双端队列得到的输出序列可以为：4、1、3、2\n"<<endl;
	cout << "以下为输出受限的情况(以从表头遍历为例)：" << endl;
	input(deque);
	input(deque);
	input(deque);
	input(deque);
	traverse(deque);
	cout << "当输入输出都受限时，运行结果如上所示；\n所以，能由输出受限的双端队列得到，但不能由输入受限的双端队列得到的输出序列可以为：4、2、1、3\n" << endl;
	cout << "清空队列，队列是否为空：";
	deque.clear();
	deque.empty() ? cout << "Yes!" << endl : cout << "No!" << endl;
	system("pause");
	return 0;
}