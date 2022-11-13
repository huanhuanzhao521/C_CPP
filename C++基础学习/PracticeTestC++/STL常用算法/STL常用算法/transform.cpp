#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

// transform

class TransForm
{
public:
	int operator()(int val)
	{
		return val + 100;
	}
};

class Myprint
{
public:
	void operator ()(int val)
	{
		cout << val << " ";
	}
};

void test01()
{
	vector<int> v;
	for (size_t i = 0; i < 10; i++) {
		v.push_back(i);
	}

	vector<int> vtarget;
	vtarget.resize(v.size()); // 目标容器需要提前开辟空间
	transform(v.begin(), v.end(), vtarget.begin(), TransForm());
	for_each(vtarget.begin(), vtarget.end(), Myprint());
	cout << endl;
}

int main()
{
	test01();
	system("pause");
	return 0;
}