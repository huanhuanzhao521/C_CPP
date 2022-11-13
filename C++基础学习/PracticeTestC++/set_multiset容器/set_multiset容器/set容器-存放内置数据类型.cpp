#include <iostream>
#include <set>

using namespace std;

class MyCompare
{
public:
	bool operator()(int v1, int v2) const
	{
		return v1 > v2;
	}
};

void test01()
{
	set<int> s1;
	s1.insert(10);
	s1.insert(40);
	s1.insert(20);
	s1.insert(50);
	s1.insert(30);

	for (set<int>::iterator it = s1.begin(); it != s1.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;

	// ָ���������Ϊ�Ӵ�С

	set<int, MyCompare> s2;
	s2.insert(10);
	s2.insert(40);
	s2.insert(20);
	s2.insert(50);
	s2.insert(30);
	for (set<int, MyCompare>::iterator it2 = s2.begin(); it2 != s2.end(); it2++) {
		cout << *it2 << " ";
	}
	cout << endl;
	
}

int main()
{
	test01();
	system("pause");
	return 0;
}
