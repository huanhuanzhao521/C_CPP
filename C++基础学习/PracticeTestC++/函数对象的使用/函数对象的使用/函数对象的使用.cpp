#include <iostream>
#include <string>

using namespace std;

// �º���
/*
* ����������ʹ��ʱ����������ͨ�����������ã������в����������з���ֵ��
* �������󳬳���ͨ�����ĸ����������������Լ���״̬��
* �������������Ϊ�������ݣ�

*/
class MyAdd
{
public:
	int operator()(int v1, int v2)
	{
		return v1 + v2;
	}
};

//����������ʹ��ʱ����������ͨ�����������ã������в����������з���ֵ��
void test01()
{
	MyAdd myAdd;
	cout << myAdd(10, 10) << endl;
}

// �������󳬳���ͨ�����ĸ����������������Լ���״̬��
class MyPrint
{
public:
	MyPrint()
	{
		this->count = 0;
	}
	void operator()(string test)
	{
		cout << test << endl;
		this->count++;
	}
	// �ڲ��Լ���״̬
	int count;
};
void test02()
{
	MyPrint myPrint;
	myPrint("hello world,hello world!");
	myPrint("hello world,hello world!");
	myPrint("hello world,hello world!");
	myPrint("hello world,hello world!");
	cout << "myPrint ���õĴ�����" << myPrint.count << endl;
}

// �������������Ϊ�������ݣ�
void doprint(MyPrint& mp,string test)
{
	mp(test);
}
void test03()
{
	MyPrint myprint;
	doprint(myprint,"hello C++");
}

int main()
{
	test01();
	test02();
	test03();
	system("pause");
	return 0;
}