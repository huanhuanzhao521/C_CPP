#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void MyPrint(int val)
{
	cout << val << " ";
}

void test01()
{
	vector<int> v1;
	vector<int> v2;

	for (size_t i = 0; i < 10; i++) {
		v1.push_back(i);
		v2.push_back(i + 1);
	}
	
	vector<int> vtarget;
	vtarget.resize(v1.size() + v2.size());
	merge(v1.begin(), v1.end(), v2.begin(), v2.end(), vtarget.begin());

	for_each(vtarget.begin(), vtarget.end(), MyPrint);
	cout << endl;
}

int main()
{
	test01();
	system("pause");
	return 0;
}