#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void Print(int val)
{
	cout << val << " ";
}

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
	for_each(v1.begin(), v1.end(), Print);
	cout << endl;
	cout << "�滻��" << endl;
	replace(v1.begin(), v1.end(), 20, 2000);
	for_each(v1.begin(), v1.end(), Print);
	cout << endl;
}

int main()
{
	test01();
	system("pause");
	return 0;
}