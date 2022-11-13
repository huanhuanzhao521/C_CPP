#include <iostream>
#include <set>
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

class ComparePerson
{
public:
	bool operator()(const Person& p1,const Person& p2) const
	{
		// 按照年龄降序
		return p1.m_age > p2.m_age;
	}
};

void test01()
{
	// 自定义数据类型指定排序规则
	set<Person, ComparePerson> sp1;

	// 创建Person对象
	Person p1("刘备", 24);
	Person p2("关羽", 28);
	Person p3("张飞", 25);
	Person p4("赵云", 21);

	sp1.insert(p1);
	sp1.insert(p2);
	sp1.insert(p3);
	sp1.insert(p4);

	for (set<Person,ComparePerson>::iterator it = sp1.begin(); it != sp1.end(); it++) {
		cout << "姓名：" << (*it).m_name << "  年龄：" << it->m_age << endl;
	}
	cout << endl;

}

int main()
{
	test01();
	system("pause");
	return 0;
}