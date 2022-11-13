#include <iostream>
#include <queue>
#include <string>

using namespace std;

class Person
{
public:
	Person(string name, int age)
	{
		this->m_name = name;
		this->m_age = age;
	}
	string m_name;
	int m_age;
};

void test01()
{
	queue<Person> queper;

	// 准备数据
	Person p1("唐僧", 22);
	Person p2("孙悟空", 1000);
	Person p3("猪八戒", 999);
	Person p4("沙僧", 998);

	// 入队
	queper.push(p1);
	queper.push(p2);
	queper.push(p3);
	queper.push(p4);

	cout << "队列的大小：" << queper.size() << endl;

	// 判断只要队列不为空，查看队头，队尾，出队；
	while (!queper.empty()) {
		// 查看队头
		cout << "队头元素 --- 姓名：" << queper.front().m_name
			<< "  年龄：" << queper.front().m_age << endl;

		// 查看队尾
		cout << "队头元素 --- 姓名：" << queper.back().m_name
			<< "  年龄：" << queper.back().m_age << endl;

		// 出队
		queper.pop();
	}
	cout << "队列的大小：" << queper.size() << endl;

}

int main()
{
	test01();
	system("pause");
	return 0;
}