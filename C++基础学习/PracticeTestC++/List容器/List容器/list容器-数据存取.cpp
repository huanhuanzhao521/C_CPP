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

	cout << "��һ��Ԫ�أ�" << l1.front() << endl;
	cout << "���һ��Ԫ�أ�" << l1.back() << endl;

	// ��֤�������ǲ�֧��������ʵ�
	list<int>::iterator it = l1.begin();
	it++; // ֧��˫��
	it--;
	// it = it + 2; ��֧���������
}

int main()
{
	test01();
	system("pause");
	return 0;

}