#include <iostream>
#include <vector>

using namespace std;

void test01()
{
	vector<int> v1;
	for (size_t i = 0; i < 10; i++) {
		v1.push_back(i);
	}
	// ����[]�ķ�ʽ���������е�Ԫ��
	for (int i = 0; i < v1.size(); i++) {
		cout << v1[i] << " ";
	}
	cout << endl;

	// ����at����Ԫ��
	for (int i = 0; i < v1.size(); i++) {
		cout << v1.at(i) << " ";
	}
	cout << endl;

	//��ȡ��һ��Ԫ��
	cout << v1.front() << endl;
	//��ȡ���һ��Ԫ��
	cout << v1.back() << endl;
}

int main()
{
	test01();
	system("pause");
	return 0;
}