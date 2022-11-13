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

	// ׼������
	Person p1("��ɮ", 22);
	Person p2("�����", 1000);
	Person p3("��˽�", 999);
	Person p4("ɳɮ", 998);

	// ���
	queper.push(p1);
	queper.push(p2);
	queper.push(p3);
	queper.push(p4);

	cout << "���еĴ�С��" << queper.size() << endl;

	// �ж�ֻҪ���в�Ϊ�գ��鿴��ͷ����β�����ӣ�
	while (!queper.empty()) {
		// �鿴��ͷ
		cout << "��ͷԪ�� --- ������" << queper.front().m_name
			<< "  ���䣺" << queper.front().m_age << endl;

		// �鿴��β
		cout << "��ͷԪ�� --- ������" << queper.back().m_name
			<< "  ���䣺" << queper.back().m_age << endl;

		// ����
		queper.pop();
	}
	cout << "���еĴ�С��" << queper.size() << endl;

}

int main()
{
	test01();
	system("pause");
	return 0;
}