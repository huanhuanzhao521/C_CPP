#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

// 1、统计内置数据类型
void test01()
{
	vector<int> v;
	v.push_back(10);
	v.push_back(40);
	v.push_back(30);
	v.push_back(40);
	v.push_back(20);
	v.push_back(40);

	int num = count(v.begin(), v.end(), 40);
	cout << "40元素的个数：" << num << endl;
}
// 2、统计自定义数据类型
class Person
{
public:
	Person(string name, int age)
	{
		this->m_age = age;
		this->m_name = name;
	}

	bool operator == (const Person &p)
	{
		if (this->m_age == p.m_age) {
			return true;
		} else {
			return false;
		}
	}
	string m_name;
	int m_age;
};


void test02()
{
	vector<Person> vp;
	Person p1("刘备", 35);
	Person p2("关羽", 35);
	Person p3("张飞", 35);
	Person p4("赵云", 30);
	Person p5("曹操", 40);

	Person p6("曹操", 35);

	vp.push_back(p1);
	vp.push_back(p2);
	vp.push_back(p3);
	vp.push_back(p4);
	vp.push_back(p5);

	int num = count(vp.begin(), vp.end(), p6);
	cout << "和诸葛亮同岁数的人员个数：" << num << endl;
}

int main()
{
	test01();
	test02();
	system("pause");
	return 0;
}