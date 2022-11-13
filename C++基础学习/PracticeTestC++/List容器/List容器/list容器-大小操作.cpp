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

void test01()
{
	list<int> lst;
	lst.push_back(10);
	lst.push_back(20);
	lst.push_back(30);
	lst.push_back(40);

	printList(lst);

	// 判断容器是否为空
	if (lst.empty()) {
		cout << "容器为空！" << endl;
	} else {
		cout << "容器不为空！" << endl;
		cout << "容器的元素个数：" << lst.size() << endl;
	}

	// 重新指定大小
	lst.resize(10, 1000);
	printList(lst);

	lst.resize(2);
	printList(lst);

}

int main()
{
	test01();
	system("pause");
	return 0;
}