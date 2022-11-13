#include <iostream>
#include <algorithm>
#include <vector>
#include <algorithm>
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
	// 重载== 底层的find指导如何对比person数据类型
	bool operator==(const Person& p)
	{
		if (this->m_name == p.m_name && this->m_age == p.m_age) {
			return true;
		}
		else {
			return false;
		}
	}
	string m_name;
	int m_age;
};

// 查找内置数据类型
void test01()
{
	vector<int> v;
	for (size_t i = 0; i < 10; i++) {
		v.push_back(i);
	}

	vector<int>::iterator pos = find(v.begin(), v.end(), 5);
	if (pos != v.end()) {
		cout << "找到元素:" << *pos <<endl;
	} else {
		cout << "没有找到元素" << endl;
	}
}

// 查找自定义数据类型
void test02()
{
	vector<Person> v;
	// 创建数据
	Person p1("aaa", 10);
	Person p2("bbb", 20);
	Person p3("ccc", 30);
	Person p4("ddd", 40);

	// 将数据放入到容器中
	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);

	Person pp("bbb", 20);

	vector<Person>::iterator it = find(v.begin(), v.end(), pp);
	if (it == v.end()) {
		cout << "没有找到" << endl;
	} else {
		cout << "找到了，姓名：" << it->m_name << "  年龄：" << it->m_age << endl;
	}
}

int main()
{
	test01();
	test02();
	system("pause");
	return 0;

}