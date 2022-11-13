#include <iostream>
#include <deque>

using namespace std;

void printDeque(const deque<int>& deq)
{
	for (deque<int>::const_iterator ideq = deq.begin(); ideq != deq.end(); ideq++) {
		// *ideq=100;  // 容器中的数据不可修改了
		cout << *ideq << " ";
	}
	cout << endl;
}

void test01()
{
	deque<int> deq;
	for (size_t i = 0; i < 10; i++) {
		deq.push_back(i);
	}
	printDeque(deq);

	deque<int> deq2(deq.begin(), deq.end());
	printDeque(deq2);

	deque<int> deq3(10, 100);
	printDeque(deq3);

	deque<int> deq4(deq3);
	printDeque(deq4);
}

int main()
{
	test01();
	system("pause");
	return 0;
}