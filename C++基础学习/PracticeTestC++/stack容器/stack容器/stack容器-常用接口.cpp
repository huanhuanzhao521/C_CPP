#include <iostream>
#include <stack>

using namespace std;

void test01()
{
	stack<int> stk;

	// ��ջ
	stk.push(10);
	stk.push(20);
	stk.push(30);
	stk.push(40);
	stk.push(50);

	cout << "ջ�Ĵ�СΪ��" << stk.size() << endl;

	while (!stk.empty()) {
		cout << "ջ��Ԫ��Ϊ��" << stk.top() << endl;

		// ��ջ
		stk.pop();
	}
	// ջ�Ĵ�С
	cout << "ջ�Ĵ�СΪ��" << stk.size() << endl;
}

int main()
{
	test01();
	system("pause");
	return 0;
}