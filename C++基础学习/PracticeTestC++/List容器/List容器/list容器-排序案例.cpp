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

// ָ���������
bool comparePerson(Person& p1, Person& p2)
{
	// ����������������
	if (p1.m_age == p2.m_age) {
		// ������ͬ��������߽�������
		return p1.m_height > p2.m_height;
	}
	return p1.m_age < p2.m_age;
}

void test01()
{
	list<Person> l1;

	// ׼������
	Person p1("����", 35, 175);
	Person p2("�ܲ�", 45, 180);
	Person p3("��Ȩ", 40, 170);
	Person p4("����", 25, 190);
	Person p5("�ŷ�", 35, 160);
	Person p6("����", 35, 200);

	// �������в�������
	l1.push_back(p1);
	l1.push_back(p2);
	l1.push_back(p3);
	l1.push_back(p4);
	l1.push_back(p5);
	l1.push_back(p6);

	for (list<Person>::iterator it = l1.begin(); it != l1.end(); it++) {
		cout << "����:" << (*it).m_name << " ����:" << it->m_age
			<< " ���:" << it->m_height << endl;
	}
	cout << "---------------------" << endl;
	// ����
	cout << "�����" << endl;

	l1.sort(comparePerson);
	for (list<Person>::iterator it = l1.begin(); it != l1.end(); it++) {
		cout << "����:" << (*it).m_name << " ����:" << it->m_age
			<< " ���:" << it->m_height << endl;
	}

}

int main()
{
	test01();
	system("pause");
	return 0;
}