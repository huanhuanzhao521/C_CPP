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

	// �ж������Ƿ�Ϊ��
	if (lst.empty()) {
		cout << "����Ϊ�գ�" << endl;
	} else {
		cout << "������Ϊ�գ�" << endl;
		cout << "������Ԫ�ظ�����" << lst.size() << endl;
	}

	// ����ָ����С
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