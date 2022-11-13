#include <iostream>
#include <map>

using namespace std;

void printMap(map<int, int>& mp)
{
	for (map<int, int>::iterator it = mp.begin(); it != mp.end(); it++) {
		cout << "key = " << (*it).first << "  value = " << it->second << endl;
	}
	cout << endl;
}

void test01()
{
	map<int, int> mp1;
	mp1.insert(pair<int, int>(3, 30));
	mp1.insert(pair<int, int>(1, 10));
	mp1.insert(pair<int, int>(4, 40));
	mp1.insert(pair<int, int>(2, 20));

	if (mp1.empty()) {
		cout << "map容器为空！" << endl;
	} else {
		cout << "map容器不为空！" << endl;
		cout << "mp1的大小为：" << mp1.size() << endl;
	}
	
	printMap(mp1);
}

// 交换
void test02()
{
	cout << "--------交换工作--------" << endl;
	map<int, int> mp2;
	mp2.insert(pair<int, int>(10, 1));
	mp2.insert(pair<int, int>(20, 2));
	mp2.insert(pair<int, int>(30, 3));
	mp2.insert(pair<int, int>(40, 4));

	map<int, int> mp3;
	mp3.insert(pair<int, int>(1, 100));
	mp3.insert(pair<int, int>(2, 200));
	mp3.insert(pair<int, int>(3, 300));
	mp3.insert(pair<int, int>(4, 400));

	cout << "交换前：" << endl;
	printMap(mp2);
	printMap(mp3);

	mp2.swap(mp3);
	cout << "交换后：" << endl;
	
	printMap(mp2);
	printMap(mp3);


}

int main()
{
	test01();
	test02();
	system("pause");
	return 0;
}