#include <iostream>
#include <string>
using namespace std;

class Person {
public:
    Person(string name, int age)
    {
        m_name = name;
        m_age = age;
    }

    // ���� == �����
    bool operator==(Person& p)
    {
        if (this->m_age == p.m_age && this->m_name == p.m_name) {
            return true;
        }
        return false;
    }

    bool operator != (Person& p)
    {
        if (this->m_age == p.m_age && this->m_name == p.m_name) {
            return false;
        }
        return true;
    }

    string m_name;
    int m_age;
};


void test01()
{
    Person p1("Tom", 18);
    Person p2("Tom", 18);

    if (p1 == p2) {
        cout << "���� == ���ý�� p1 �� p2 ����ȵ�" << endl;
    } else {
        cout << "���� == ���ý�� p1 �� p2 �ǲ���ȵ�" << endl;
    }

    if (p1 != p2) {
        cout << "���� != ���ý�� p1 �� p2 �ǲ���ȵ�" << endl;
    } else {
        cout << "���� != ���ý�� p1 �� p2 ����ȵ�" << endl;
    }
}


int main()
{

    test01();
    system("pause");
    return 0;
}