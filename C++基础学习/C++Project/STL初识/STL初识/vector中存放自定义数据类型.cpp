#include <iostream>
#include <vector>
#include <string>

using namespace std;

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

void test01()
{
    vector<Person> vp;
    Person p1("aaa", 10);
    Person p2("bbb", 20);
    Person p3("ccc", 30);
    Person p4("ddd", 40);
    Person p5("eee", 50);

    // ���������������
    vp.push_back(p1);
    vp.push_back(p2);
    vp.push_back(p3);
    vp.push_back(p4);
    vp.push_back(p5);

    // ���������е�����
    for (vector<Person>::iterator it = vp.begin(); it != vp.end(); it++) {
        // cout << "������" << (*it).m_name << " ���䣺 " << (*it).m_age << endl;
        cout << "������" << it->m_name << " ���䣺 " << it->m_age << endl;
    }
    cout << endl;
}

// ����Զ����������͵�ָ��
void test02()
{
    vector<Person*> vp2;
    Person p1("aaa", 10);
    Person p2("bbb", 20);
    Person p3("ccc", 30);
    Person p4("ddd", 40);
    Person p5("eee", 50);
    // ���������������
    vp2.push_back(&p1);
    vp2.push_back(&p2);
    vp2.push_back(&p3);
    vp2.push_back(&p4);
    vp2.push_back(&p5);

    // ��������
    for (vector<Person*>::iterator it = vp2.begin(); it != vp2.end(); it++) {
        cout << "������" << (*it)->m_name << " ���䣺" << (*it)->m_age << endl;
    }
}

int main()
{
    test01();
    test02();
    system("pause");
    return 0;
}