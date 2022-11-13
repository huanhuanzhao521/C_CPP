#include <iostream>
#include <list>

using namespace std;

void printList(const list<int>& lst)
{
	for (list<int>::const_iterator it = lst.begin(); it != lst.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
}

// 赋值
void test01()
{
	list<int> lst1;
	lst1.push_back(10);
	lst1.push_back(20);
	lst1.push_back(30);
	lst1.push_back(40);

	printList(lst1);

	list<int> lst2;
	lst2 = lst1;     // operator=
	printList(lst2);

	list<int> lst3;
	lst3.assign(lst2.begin(), lst2.end());
	printList(lst3);

	list<int> lst4;
	lst4.assign(10, 100);
	printList(lst4);
}

// 交换
void test02()
{
	list<int> l1;
	l1.push_back(10);
	l1.push_back(20);
	l1.push_back(30);
	l1.push_back(40);

	list<int> l2;
	l2.assign(10, 100);
	
	cout << "交换前：" << endl;
	printList(l1);
	printList(l2);

	cout << "交换后：" << endl;
	l1.swap(l2);
	printList(l1);
	printList(l2);
}

int main()
{
	test01();
	test02();
	system("pause");
	return 0;
}