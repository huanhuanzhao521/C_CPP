#include <iostream>
#include <list>
#include <string>

using namespace std;

class Person
{
public:
	Person(string name, int age, int height)
	{
		this->m_name = name;
		this->m_age = age;
		this->m_height = height;
	}
	string m_name;
	int m_age;
	int  m_height;
};

// 指定排序规则
bool comparePerson(Person& p1, Person& p2)
{
	// 按照年龄升序排序
	if (p1.m_age == p2.m_age) {
		// 年龄相同，按照身高降序排序
		return p1.m_height > p2.m_height;
	}
	return p1.m_age < p2.m_age;
}

void test01()
{
	list<Person> l1;

	// 准备数据
	Person p1("刘备", 35, 175);
	Person p2("曹操", 45, 180);
	Person p3("孙权", 40, 170);
	Person p4("赵云", 25, 190);
	Person p5("张飞", 35, 160);
	Person p6("关羽", 35, 200);

	// 向容器中插入数据
	l1.push_back(p1);
	l1.push_back(p2);
	l1.push_back(p3);
	l1.push_back(p4);
	l1.push_back(p5);
	l1.push_back(p6);

	for (list<Person>::iterator it = l1.begin(); it != l1.end(); it++) {
		cout << "姓名:" << (*it).m_name << " 年龄:" << it->m_age
			<< " 身高:" << it->m_height << endl;
	}
	cout << "---------------------" << endl;
	// 排序
	cout << "排序后：" << endl;

	l1.sort(comparePerson);
	for (list<Person>::iterator it = l1.begin(); it != l1.end(); it++) {
		cout << "姓名:" << (*it).m_name << " 年龄:" << it->m_age
			<< " 身高:" << it->m_height << endl;
	}

}

int main()
{
	test01();
	system("pause");
	return 0;
}