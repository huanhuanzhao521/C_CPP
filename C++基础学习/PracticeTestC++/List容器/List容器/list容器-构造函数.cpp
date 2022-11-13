#include <iostream>
#include <list>

using namespace std;

// 遍历容器
void printList(const list<int>& lst)
{
	for (list<int>::const_iterator it = lst.begin(); it != lst.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
}

void test01()
{
	list<int> lst1;

	// 添加数据
	lst1.push_back(10);
	lst1.push_back(20);
	lst1.push_back(30);
	lst1.push_back(40);

	// 遍历容i去
	printList(lst1);

	// 区间的方式构造
	list<int> lst2(lst1.begin(), lst1.end());
	printList(lst2);

	// 拷贝构造
	list<int> lst3(lst2);
	printList(lst3);

	// n个elem
	list<int> lst4(10, 1000);
	printList(lst4);

}

int main()
{
	test01();
	system("pause");
	return 0;
}