#include <iostream>
#include <set>

using namespace std;

void test01()
{
	set<int> s1;

	// ����
	s1.insert(10);
	s1.insert(20);
	s1.insert(30);
	s1.insert(40);
	s1.insert(30);
	s1.insert(30);

	// ����
	set<int>::iterator pos = s1.find(300);
	if (pos != s1.end()) {
		cout << "�ҵ�Ԫ�أ�" << *pos << endl;
	} else {
		cout << "δ�ҵ�Ԫ��" << endl;
	}

	int num = s1.count(30);

	// ����set���ԣ�ͳ�ƽ�� Ҫô��0 Ҫô�� 1
	cout << "num = " << num << endl;
}

int main()
{
	test01();
	system("pause");
	return 0;
}