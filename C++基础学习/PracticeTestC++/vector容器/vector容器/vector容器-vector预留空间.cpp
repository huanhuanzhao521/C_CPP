#include <iostream>
#include <vector>

using namespace std;

void test01()
{
	vector<int> v;

	// ����reserveԤ���ռ�
	v.reserve(100000);

	int num = 0; // ͳ�ƿ��ٵĴ���
	int* p = nullptr;
	for (size_t i = 0; i < 100000; i++) {
		v.push_back(i);
		if (p != &v[0]) {
			p = &v[0];
			num++;
		}
	}
	cout << "num = " << num << endl;
}

int main()
{
	test01();
	system("pause");
	return 0;
}