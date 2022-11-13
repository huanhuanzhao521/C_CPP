#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;
class Greater20
{
public:
	bool operator()(int val)
	{
		return val > 20;
	}
};
void test01()
{
	vector<int> v;
	v.push_back(10);
	v.push_back(40);
	v.push_back(30);
	v.push_back(20);
	v.push_back(40);
	v.push_back(20);

	int num = count_if(v.begin(), v.end(), Greater20());
	cout << "����20�ĸ�����" << num << endl;
}

// �Զ�����������


class Person
{
public:
	Person(string name, int age)
	{
		this->m_age = age;
		this->m_name = name;
	}
	string m_name;
	int m_age;
};
class AgeGreater20
{
public:
	bool operator()(const Person& p)
	{
		return p.m_age > 20;
	}
};

void test02()
{
	vector<Person> vp;

	Person p1("����", 35);
	Person p2("����", 35);
	Person p3("�ŷ�", 35);
	Person p4("����", 40);
	Person p5("�ܲ�", 20);

	vp.push_back(p1);
	vp.push_back(p2);
	vp.push_back(p3);
	vp.push_back(p4);
	vp.push_back(p5);

	int num2 = count_if(vp.begin(), vp.end(), AgeGreater20());
	cout << "����20����Ա�ĸ�����" << num2 << endl;
}

int main()
{
	test01();
	test02();
	system("pause");
	return 0;
}