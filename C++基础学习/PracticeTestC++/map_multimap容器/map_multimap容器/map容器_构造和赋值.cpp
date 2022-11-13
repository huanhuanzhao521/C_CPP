#include <iostream>
#include <map>

using namespace std;

void printMap( map<int, int> mp)
{
	for (map<int, int>::iterator it = mp.begin(); it != mp.end(); it++) {
		cout << "keyt = " << (*it).first << "  value = " << it->second << endl;
	}
	cout << endl;
}

void test01()
{
	map<int, int> mp;

	mp.insert(pair<int, int>(1, 10));
	mp.insert(pair<int, int>(3, 30));
	mp.insert(pair<int, int>(2, 20));
	mp.insert(pair<int, int>(4, 40));

	printMap(mp);

	// øΩ±¥ππ‘Ï
	map<int, int> mp2(mp);
	printMap(mp2);

	// ∏≥÷µ
	map<int, int> mp3;
	mp3 = mp2;
	printMap(mp3);


}

int main()
{
	test01();
	system("pause");
	return 0;
}