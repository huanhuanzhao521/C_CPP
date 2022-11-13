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
	// Ŀ��������Ҫ��ǰ���ٿռ�
	// �������������������û�н�����ȡ���������д��size()��ΪĿ���������ٿռ䣻
	vtarget.resize(max(v1.size(),v2.size()));

	// ��ȡ�
	cout << "v1��v2�Ĳ��" << endl;
	vector<int>::iterator itEnd = set_difference(v1.begin(), v1.end(), v2.begin(), v2.end(), vtarget.begin());
	for_each(vtarget.begin(), itEnd, Print);
	cout << endl;

	cout << "v2��v1�Ĳ��" << endl;
	itEnd = set_difference(v2.begin(), v2.end(), v1.begin(), v1.end(), vtarget.begin());
	for_each(vtarget.begin(), itEnd, Print);
	cout << endl;
}

int main()
{
	test01();
	system("pause");
	return 0;
}