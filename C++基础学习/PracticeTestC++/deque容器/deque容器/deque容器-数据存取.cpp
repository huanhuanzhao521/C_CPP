#include <iostream>
#include <deque>

using namespace std;

void printDeque(const deque<int>& d)
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
}

void test01()
{
	deque<int> d1;
	d1.push_back(10);
	d1.push_back(20);
	d1.push_back(30);
	d1.push_front(100);
	d1.push_front(200);
	d1.push_front(300);

	// ͨ��[]��ʽ����Ԫ��
	for (size_t i = 0; i < d1.size(); i++) {
		cout << d1[i] << " ";
	}
	cout << endl;

	// ͨ��at��ʽ����Ԫ��
	for (int i = 0; i < d1.size(); i++) {
		cout << d1.at(i) << " ";
	}
	cout << endl;

	cout << "��һ��Ԫ��Ϊ��" << d1.front() << endl;
	cout << "���һ��Ԫ��Ϊ��" << d1.back() << endl;
	
}

int main()
{
	test01();
	system("pause");
	return 0;
}