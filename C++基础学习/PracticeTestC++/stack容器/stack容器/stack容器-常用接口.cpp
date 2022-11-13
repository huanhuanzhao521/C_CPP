#include <iostream>
#include <stack>

using namespace std;

void test01()
{
	stack<int> stk;

	// 入栈
	stk.push(10);
	stk.push(20);
	stk.push(30);
	stk.push(40);
	stk.push(50);

	cout << "栈的大小为：" << stk.size() << endl;

	while (!stk.empty()) {
		cout << "栈顶元素为：" << stk.top() << endl;

		// 出栈
		stk.pop();
	}
	// 栈的大小
	cout << "栈的大小为：" << stk.size() << endl;
}

int main()
{
	test01();
	system("pause");
	return 0;
}