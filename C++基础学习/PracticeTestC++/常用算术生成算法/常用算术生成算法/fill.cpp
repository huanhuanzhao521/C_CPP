#include <iostream>
#include <numeric>
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
	v.resize(10);

	// �����������
	fill(v.begin(), v.end(), 100);

	for_each(v.begin(), v.end(), Print);
	cout << endl;
}

int main()
{
	test01();
	system("pause");
	return 0;
}