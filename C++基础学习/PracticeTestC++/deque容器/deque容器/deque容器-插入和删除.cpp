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

// ���˲���
void test01()
{
	deque <int> d1;
	// β������
	d1.push_back(10);
	d1.push_back(20);
	d1.push_back(30);
	d1.push_back(40);
	d1.push_back(50);

	// ͷ������
	d1.push_front(100);
	d1.push_front(200);

	printDeque(d1);

	// β��ɾ������
	d1.pop_back();
	printDeque(d1);

	// ͷ��ɾ��
	d1.pop_front();
	printDeque(d1);

}

void test02()
{
	deque<int> d2;
	d2.push_back(10);
	d2.push_back(20);
	d2.push_front(100);
	d2.push_front(200);
	printDeque(d2);

	// insert����
	d2.insert(d2.begin(), 1000);
	printDeque(d2);

	d2.insert(d2.begin(), 2, 10000);
	printDeque(d2);

	// ����������в���
	deque<int> d3;
	d3.push_back(1);
	d3.push_back(2);
	d3.push_back(3);

	d2.insert(d2.begin(), d3.begin(), d3.end());
	printDeque(d2);

	//eraseɾ������

	deque<int>::iterator it = d2.begin();
	it++;
	d2.erase(it);
	printDeque(d2);

	// ��������ķ�ʽɾ��
	cout << "��������ķ�ʽɾ��" << endl;
	d2.erase(d2.begin(), d2.end());
	printDeque(d2);

	cout << "clear() ����" << endl;
	d2.clear();
	printDeque(d2);
}

int main()
{
	test01();
	cout << "=======================" << endl;
	test02();
	system("pause");
	return 0;
}