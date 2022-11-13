#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Print
{
public:
	void operator()(int val)
	{
		cout << val << " ";
	}
};

class Greater30
{
public:
	bool operator()(int val)
	{
		return val >= 30;
	}
};
void test01()
{
	vector<int> v1;
	vector<int> v2;
	for (size_t i = 0; i < 10; i++) {
		v1.push_back(i);
		v2.push_back(i + 100);
	}
	

	cout << "����ǰ��" << endl;
	for_each(v1.begin(), v1.end(), Print());
	cout << endl;
	for_each(v2.begin(), v2.end(), Print());
	cout << endl;

	// �����ڵ���30���滻��3000
	cout << "===============================" << endl;
	cout << "������" << endl;
	swap(v1, v2);
	for_each(v1.begin(), v1.end(), Print());
	cout << endl;
	for_each(v2.begin(), v2.end(), Print());
	cout << endl;
}

int main()
{
	test01();
	system("pause");
	return 0;
}