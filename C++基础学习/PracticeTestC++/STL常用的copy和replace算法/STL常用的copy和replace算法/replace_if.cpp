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
	v1.push_back(20);
	v1.push_back(30);
	v1.push_back(50);
	v1.push_back(30);
	v1.push_back(40);
	v1.push_back(20);
	v1.push_back(10);
	v1.push_back(20);

	cout << "�滻ǰ��" << endl;
	for_each(v1.begin(), v1.end(), Print());
	cout << endl;

	// �����ڵ���30���滻��3000
	cout << "�滻��" << endl;
	replace_if(v1.begin(), v1.end(), Greater30(), 3000);
	for_each(v1.begin(), v1.end(), Print());
	cout << endl;
}

int main()
{
	test01();
	system("pause");
	return 0;
}