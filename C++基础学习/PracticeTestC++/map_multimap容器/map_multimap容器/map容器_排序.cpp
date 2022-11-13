#include <iostream>
#include <map>

using namespace std;

class MyCompare
{
public:
	bool operator()(int v1,int v2) const
	{
		return v1 > v2;
	}
};

void test01()
{
	map<int, int, MyCompare> mp;
	mp.insert(make_pair(1, 10));
	mp.insert(make_pair(2, 20));
	mp.insert(make_pair(3, 30));
	mp.insert(make_pair(4, 40));
	mp.insert(make_pair(5, 50));

	for (map<int, int, MyCompare>::iterator it = mp.begin(); it != mp.end(); it++) {
		cout << "key = " << it->first << "  value = " << it->second << endl;
	}
	cout << endl;
}

int main()
{
	test01();
	system("pause");
	return 0;
}