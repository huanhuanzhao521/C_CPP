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
	for (size_t i = 0; i < 10; i++) {
		d1.push_back(i);
	}
	if (d1.empty()) {
		cout << "d1容器为空" << endl;
	}
	cout << "d1容器不为空" << endl;
	printDeque(d1);
	cout << "d1的大小为：" << d1.size() << endl;

	//resize(num)
	deque<int> d2;
	d2 = d1;
	d2.resize(15);
	printDeque(d2);

	deque<int> d3;
	d3 = d1;
	d3.resize(5);
	printDeque(d3);

	deque<int> d4;
	d4 = d1;
	d4.resize(15, 10);
	printDeque(d4);


}

int main()
{
	test01();
	system("pause");
	return 0;
}