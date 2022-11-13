#include <iostream>
#include <map>

using namespace std;

void test01()
{
	map<int, int> mp;
	mp.insert(make_pair(1, 10));
	mp.insert(make_pair(2, 20));
	mp.insert(make_pair(3, 30));
	mp.insert(make_pair(3, 40));


	// 查找
	
	map<int, int>::iterator pos = mp.find(3);
	if (pos != mp.end()) {
		cout << "查到了元素 key = " << (*pos).first << "  value = " << pos->second << endl;
	} else {
		cout << "元素不存在！" << endl;
	}

	// 统计
	// map不允许插入重复的key 元素，count 统计而言，结果要么是0，要么是1
	// multimap的count统计可能大于1；
	int num = mp.count(3);
	cout << "num = " << num << endl;
}

int main()
{
	test01();
	system("pause");
	return 0;
}