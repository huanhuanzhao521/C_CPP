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


	// ����
	
	map<int, int>::iterator pos = mp.find(3);
	if (pos != mp.end()) {
		cout << "�鵽��Ԫ�� key = " << (*pos).first << "  value = " << pos->second << endl;
	} else {
		cout << "Ԫ�ز����ڣ�" << endl;
	}

	// ͳ��
	// map����������ظ���key Ԫ�أ�count ͳ�ƶ��ԣ����Ҫô��0��Ҫô��1
	// multimap��countͳ�ƿ��ܴ���1��
	int num = mp.count(3);
	cout << "num = " << num << endl;
}

int main()
{
	test01();
	system("pause");
	return 0;
}