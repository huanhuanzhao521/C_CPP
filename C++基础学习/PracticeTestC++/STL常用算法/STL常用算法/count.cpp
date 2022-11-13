#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

// 1��ͳ��������������
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
	cout << "40Ԫ�صĸ�����" << num << endl;
}
// 2��ͳ���Զ�����������
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
	Person p1("����", 35);
	Person p2("����", 35);
	Person p3("�ŷ�", 35);
	Person p4("����", 30);
	Person p5("�ܲ�", 40);

	Person p6("�ܲ�", 35);

	vp.push_back(p1);
	vp.push_back(p2);
	vp.push_back(p3);
	vp.push_back(p4);
	vp.push_back(p5);

	int num = count(vp.begin(), vp.end(), p6);
	cout << "�������ͬ��������Ա������" << num << endl;
}

int main()
{
	test01();
	test02();
	system("pause");
	return 0;
}