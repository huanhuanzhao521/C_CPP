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

	// ����
	// ��һ��
	mp1.insert(pair<int, int>(1, 10));

	// �ڶ���
	mp1.insert(make_pair(2, 20));

	// ������
	mp1.insert(map<int, int>::value_type(3, 30));

	// ������, ������ʹ��
	mp1[4] = 40;

	//[]��������룬��;����������key���ʵ�value
	// cout << mp1[5] << endl;  // (5,0)

	printMap(mp1);

	// ɾ��
	mp1.erase(mp1.begin());
	printMap(mp1);

	mp1.erase(3); // ����keyɾ��
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