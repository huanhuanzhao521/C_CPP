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

bool myCompare(int v1,int v2)
{
	// 降序，就让第一个数 > 第二个数
	return v1 > v2;
}

void test01()
{
	list<int> l1;
	l1.push_back(20);
	l1.push_back(10);
	l1.push_back(50);
	l1.push_back(40);
	l1.push_back(30);

	cout << "原始链表数据：" << endl;
	printList(l1);

	// 反转
	cout << "反转后：" << endl;
	l1.reverse();
	printList(l1);

	// 排序
	// 所有不支持随机访问迭代器的容器，不可以用标准算法
	// 不支持随机访问迭代器的容器，内部会提供对应一些算法
	cout << "排序后：" << endl;
	l1.sort(); // 默认排序规则，从小到大，升序
	printList(l1);

	// 降序排序
	cout << "降序排序：" << endl;
	l1.sort(myCompare);
	printList(l1);
}

int main()
{
	test01();
	system("pause");
	return 0;
}