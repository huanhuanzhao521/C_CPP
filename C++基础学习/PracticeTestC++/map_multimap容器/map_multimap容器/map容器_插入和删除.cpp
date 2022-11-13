#include <iostream>
#include <map>

using namespace std;

void printMap(map<int,int>& mp)
{
	for (map<int, int>::iterator it = mp.begin(); it != mp.end(); it++) {
		cout << "key = " << it->first << "  value = " << (*it).second << endl;
	}
	cout << endl;
}

void test01()
{
	map<int, int> mp1;

	// 插入
	// 第一种
	mp1.insert(pair<int, int>(1, 10));

	// 第二种
	mp1.insert(make_pair(2, 20));

	// 第三种
	mp1.insert(map<int, int>::value_type(3, 30));

	// 第四种, 不建议使用
	mp1[4] = 40;

	//[]不建议插入，用途，可以利用key访问到value
	// cout << mp1[5] << endl;  // (5,0)

	printMap(mp1);

	// 删除
	mp1.erase(mp1.begin());
	printMap(mp1);

	mp1.erase(3); // 按照key删除
	printMap(mp1);

	// mp1.erase(mp1.begin(), mp1.end());
	// printMap(mp1);

	mp1.clear();
	printMap(mp1);
}

int main()
{
	test01();
	system("pause");
	return 0;
}