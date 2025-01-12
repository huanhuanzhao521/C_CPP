#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

void test01()
{
	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(1);
	v.push_back(3);
	v.push_back(1);
	v.push_back(4);
	v.push_back(5);
	v.push_back(3);
	v.push_back(3);

	vector<int>::iterator pos = adjacent_find(v.begin(), v.end());
	if (pos == v.end()) {
		cout << "未找到相邻重复元素." << endl;
	}
	else {
		cout << "找到相邻重复元素：" << *pos << endl;
	}
}

int main()
{
	test01();
	system("pause");
	return 0;
}