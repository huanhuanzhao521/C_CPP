#include <iostream>
#include <list>

using namespace std;

// ��������
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

	// �������
	lst1.push_back(10);
	lst1.push_back(20);
	lst1.push_back(30);
	lst1.push_back(40);

	// ������iȥ
	printList(lst1);

	// ����ķ�ʽ����
	list<int> lst2(lst1.begin(), lst1.end());
	printList(lst2);

	// ��������
	list<int> lst3(lst2);
	printList(lst3);

	// n��elem
	list<int> lst4(10, 1000);
	printList(lst4);

}

int main()
{
	test01();
	system("pause");
	return 0;
}