#include <iostream>
#include <string>

using namespace std;

// 仿函数
/*
* 函数对象在使用时，可以像普通函数那样调用，可以有参数，可以有返回值；
* 函数对象超出普通函数的概念，函数对象可以有自己的状态；
* 函数对象可以作为参数传递；

*/
class MyAdd
{
public:
	int operator()(int v1, int v2)
	{
		return v1 + v2;
	}
};

//函数对象在使用时，可以像普通函数那样调用，可以有参数，可以有返回值；
void test01()
{
	MyAdd myAdd;
	cout << myAdd(10, 10) << endl;
}

// 函数对象超出普通函数的概念，函数对象可以有自己的状态；
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
	// 内部自己的状态
	int count;
};
void test02()
{
	MyPrint myPrint;
	myPrint("hello world,hello world!");
	myPrint("hello world,hello world!");
	myPrint("hello world,hello world!");
	myPrint("hello world,hello world!");
	cout << "myPrint 调用的次数：" << myPrint.count << endl;
}

// 函数对象可以作为参数传递；
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