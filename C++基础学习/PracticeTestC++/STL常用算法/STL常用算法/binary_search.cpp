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

	// �����������Ƿ���9
	// ע�⣺�������������������;������������У����δ֪��
	bool ret = binary_search(v.begin(), v.end(), 9);
	if (ret) {
		cout << "�ҵ���Ԫ��." << endl;
	} else {
		cout << "û���ҵ�Ԫ��." << endl;
	}
}

int main()
{
	test01();
	system("pause");
	return 0;
}