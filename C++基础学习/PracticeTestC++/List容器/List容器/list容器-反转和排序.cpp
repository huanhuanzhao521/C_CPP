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
	// ���򣬾��õ�һ���� > �ڶ�����
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

	cout << "ԭʼ�������ݣ�" << endl;
	printList(l1);

	// ��ת
	cout << "��ת��" << endl;
	l1.reverse();
	printList(l1);

	// ����
	// ���в�֧��������ʵ��������������������ñ�׼�㷨
	// ��֧��������ʵ��������������ڲ����ṩ��ӦһЩ�㷨
	cout << "�����" << endl;
	l1.sort(); // Ĭ��������򣬴�С��������
	printList(l1);

	// ��������
	cout << "��������" << endl;
	l1.sort(myCompare);
	printList(l1);
}

int main()
{
	test01();
	system("pause");
	return 0;
}