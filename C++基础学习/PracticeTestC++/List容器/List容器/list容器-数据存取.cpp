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
	list<int> l1;
	l1.push_back(10);
	l1.push_back(20);
	l1.push_back(30);
	l1.push_back(40);
	printList(l1);

	cout << "第一个元素：" << l1.front() << endl;
	cout << "最后一个元素：" << l1.back() << endl;

	// 验证迭代器是不支持随机访问的
	list<int>::iterator it = l1.begin();
	it++; // 支持双向
	it--;
	// it = it + 2; 不支持随机访问
}

int main()
{
	test01();
	system("pause");
	return 0;

}