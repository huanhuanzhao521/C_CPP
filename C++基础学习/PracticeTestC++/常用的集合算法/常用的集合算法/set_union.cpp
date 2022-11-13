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
	vector<int> v2;

	for (size_t i = 0; i < 10; i++) {
		v1.push_back(i);  // 0~9
		v2.push_back(i + 5);  // 5~14
	}



	vector<int> vtarget;
	// 目标容器需要提前开辟空间
	// 最特殊情况，两个容器没有交集，并集就是两个容器size相加；
	vtarget.resize(v1.size() + v2.size());

	// 获取并集
	vector<int>::iterator itEnd = set_union(v1.begin(), v1.end(), v2.begin(), v2.end(), vtarget.begin());

	for_each(vtarget.begin(), itEnd, Print);
	cout << endl;
}

int main()
{
	test01();
	system("pause");
	return 0;
}