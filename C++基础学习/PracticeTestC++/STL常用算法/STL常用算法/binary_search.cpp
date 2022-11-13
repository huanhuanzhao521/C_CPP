#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void test01()
{
	vector<int> v;
	for (size_t i = 0; i < 10; i++) {
		v.push_back(i);
	}

	// 查找容器中是否有9
	// 注意：容器必须是有序的序列;如果是无序序列，结果未知；
	bool ret = binary_search(v.begin(), v.end(), 9);
	if (ret) {
		cout << "找到了元素." << endl;
	} else {
		cout << "没有找到元素." << endl;
	}
}

int main()
{
	test01();
	system("pause");
	return 0;
}