#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

class GreaterFive
{
public:
	bool operator()(int val)
	{
		return val > 5;
	}
};

// 1������������������
void test01()
{
	vector<int> v;
	for (int i = 0; i < 10; i++) {
		v.push_back(i);
	}

	vector<int>::iterator pos = find_if(v.begin(), v.end(), GreaterFive());
	if (pos == v.end()) {
		cout << "û���ҵ�" << endl;
	} else {
		cout << "�ҵ�����5�����֣�" << *pos << endl;
	}
}


// 2�������Զ�����������

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

class AgeGreaterFive
{
public:
	bool operator ()(Person &p)
	{
		return p.m_age > 20;
	}
};

void test02() 
{
	vector<Person> vp;

	//��������
	Person p1("111", 15);
	Person p2("222", 20);
	Person p3("333", 25);
	Person p4("444", 30);

	vp.push_back(p1);
	vp.push_back(p2);
	vp.push_back(p3);
	vp.push_back(p4);

	vector<Person>::iterator pos = find_if(vp.begin(), vp.end(), AgeGreaterFive());
	if (pos == vp.end()) {
		cout << "û���ҵ�����." << endl;
	}
	else {
		cout << "������" << pos->m_name << "  ���䣺" << (*pos).m_age << endl;
	}
}

int main()
{
	test01();
	test02();
	system("pause");
	return 0;
}