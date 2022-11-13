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
	// ����== �ײ��findָ����ζԱ�person��������
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

// ����������������
void test01()
{
	vector<int> v;
	for (size_t i = 0; i < 10; i++) {
		v.push_back(i);
	}

	vector<int>::iterator pos = find(v.begin(), v.end(), 5);
	if (pos != v.end()) {
		cout << "�ҵ�Ԫ��:" << *pos <<endl;
	} else {
		cout << "û���ҵ�Ԫ��" << endl;
	}
}

// �����Զ�����������
void test02()
{
	vector<Person> v;
	// ��������
	Person p1("aaa", 10);
	Person p2("bbb", 20);
	Person p3("ccc", 30);
	Person p4("ddd", 40);

	// �����ݷ��뵽������
	v.push_back(p1);
	v.push_back(p2);
	v.push_back(p3);
	v.push_back(p4);

	Person pp("bbb", 20);

	vector<Person>::iterator it = find(v.begin(), v.end(), pp);
	if (it == v.end()) {
		cout << "û���ҵ�" << endl;
	} else {
		cout << "�ҵ��ˣ�������" << it->m_name << "  ���䣺" << it->m_age << endl;
	}
}

int main()
{
	test01();
	test02();
	system("pause");
	return 0;

}