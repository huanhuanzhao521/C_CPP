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
	vector<int> v;
	v.push_back(10);
	v.push_back(30);
	v.push_back(50);
	v.push_back(20);
	v.push_back(40);

	cout << "��תǰ��" << endl;
	for_each(v.begin(), v.end(), Print);
	cout << endl;
	reverse(v.begin(), v.end());
	cout << "��ת��" << endl;
	for_each(v.begin(), v.end(), Print);
	cout << endl;
}

int main()
{
	test01();
	system("pause");
	return 0;
}