#include <iostream>
#include <vector>

using namespace std;

void printVector(vector<int>& v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
}
void test01()
{
	vector<int> v1;
	for (size_t i = 0; i < 10; i++) {
		v1.push_back(i);
	}
	printVector(v1);

	if (v1.empty()) {
		cout << "v1Ϊ��" << endl;
	}
	cout << "v1��Ϊ��" << endl;
	cout << "v1��������" << v1.capacity() << endl;
	cout << "v1�Ĵ�С��" << v1.size() << endl;

	// ����ָ����С
	v1.resize(15, 100); // �������ָ���ı�ԭ���ĳ��ˣ�Ĭ����0����µ�λ�ã�
	                    // �������ذ汾������ָ��Ĭ�����ֵ������ 2��
	printVector(v1);

	v1.resize(5); // �������ָ���ı�ԭ���Ķ��ˣ������Ĳ��ֻ�ɾ������
	printVector(v1);
}

int main()
{
	test01();
	system("pause");
	return 0;
}