#include <iostream>
using namespace std;


class Person
{
public:
    /*
    Person()
    {
        cout << "Person Ĭ�Ϲ��캯���ĵ���" << endl;
    }*/
    Person(int age)
    {
        m_age = age;
        cout << "Person �в��캯���ĵ���" << endl;
    }
   /*
    Person(const Person& p)
    {
        m_age = p.m_age;
        cout << "Person �������캯���ĵ���" << endl;
    }*/
    ~Person()
    {
        cout << "Person Ĭ�����������ĵ���" << endl;
    }

    int m_age;
};

/*
void test1()
{
    Person p1;
    p1.m_age = 18;
    Person p2(p1);
    cout << "P2������Ϊ��" << p2.m_age << endl;
}
*/
void test2()
{
    Person p3(19);
    Person p4(p3);
    cout << "P4������Ϊ��" << p4.m_age << endl;
}

int main()
{
    // test1();
    test2();
    system("pause");
    return 0;
}