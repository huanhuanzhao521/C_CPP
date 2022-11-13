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

	cout << "����ǰ��" << endl;
	cout << "st1��Ԫ�أ�" << endl;
	printSet(st1);

	if (!st1.empty()) {
		cout << "set������Ϊ�գ�" << endl;
	} else {
		cout << "set����Ϊ�գ�" << endl;
	}
	// ��С
	cout << "st1�����Ĵ�СΪ��" << st1.size() << endl;
}

void test02()
{
	set<int> st1;
	st1.insert(10);
	st1.insert(20);
	st1.insert(30);
	st1.insert(40);

	cout << "����ǰ��" << endl;
	cout << "st1��Ԫ�أ�" ;
	printSet(st1);
	set<int> st2;
	st2.insert(50);
	st2.insert(60);
	st2.insert(70);
	st2.insert(80);
	cout << "st2��Ԫ�أ�" ;
	printSet(st2);

	cout << "�������Ԫ�أ�" << endl;
	st1.swap(st2);
	cout << "st1��Ԫ�أ�";
	printSet(st1);
	cout << "st2��Ԫ�أ�";
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