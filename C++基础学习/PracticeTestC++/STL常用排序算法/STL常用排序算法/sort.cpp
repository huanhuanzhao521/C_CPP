#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

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

	sort(v.begin(), v.end());

	for_each(v.begin(), v.end(), Print);
	cout << endl;

	// ¸Ä±äÎª½µÐò
	sort(v.begin(), v.end(), greater<int>());
	for_each(v.begin(), v.end(), Print);
	cout << endl;
}

int main()
{
	test01();
	system("pause");
	return 0;
}