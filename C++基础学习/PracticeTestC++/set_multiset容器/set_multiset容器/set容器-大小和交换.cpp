#include <iostream>
#include <set>

using namespace std;

void printSet(set<int>& st)
{
	for (set<int>::iterator it = st.begin(); it != st.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
}

void test01()
{
	set<int> st1;
	st1.insert(10);
	st1.insert(20);
	st1.insert(30);
	st1.insert(40);

	cout << "交换前：" << endl;
	cout << "st1的元素：" << endl;
	printSet(st1);

	if (!st1.empty()) {
		cout << "set容器不为空！" << endl;
	} else {
		cout << "set容器为空！" << endl;
	}
	// 大小
	cout << "st1容器的大小为：" << st1.size() << endl;
}

void test02()
{
	set<int> st1;
	st1.insert(10);
	st1.insert(20);
	st1.insert(30);
	st1.insert(40);

	cout << "交换前：" << endl;
	cout << "st1的元素：" ;
	printSet(st1);
	set<int> st2;
	st2.insert(50);
	st2.insert(60);
	st2.insert(70);
	st2.insert(80);
	cout << "st2的元素：" ;
	printSet(st2);

	cout << "交换后的元素：" << endl;
	st1.swap(st2);
	cout << "st1的元素：";
	printSet(st1);
	cout << "st2的元素：";
	printSet(st2);
}

int main()
{
	test01();
	cout << "===========" << endl;
	test02();
	system("pause");
	return 0;
}