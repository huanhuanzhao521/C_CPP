#include <iostream>
using namespace std;

class Person
{
public:
    Person()
    {
        cout << "Person ��Ĭ�Ϲ��캯������" << endl;
    }
    Person(int age)
    {
        m_age = age;
        cout << "Person �вι��캯���ĵ���" << endl;
    }
    Person(const Person& p)
    {
        m_age = p.m_age;
        cout << "Person �Ŀ������캯���ĵ���" << endl;
    }

    ~Person()
    {
        cout << "Person ��������������" << endl;
    }

    int m_age;
};

// �� ʹ��һ���Ѿ�������ϵĶ�������ʼ��һ���¶���
void test1()
{
    Person p1(10);
    Person p2(p1);
}
// �� ֵ���ݵķ�ʽ������������ֵ
void dowork(Person p)
{

}
void test2()
{
    Person p;
    dowork(p);
}
// �� ��ֵ��ʽ���ؾֲ�����

Person dowork2()
{
    Person p3;
    cout << "P3 Ĭ�Ϲ��캯���ĵ���" << endl;
    return p3;
}
void test3()
{
    Person p = dowork2();
    cout << "test3 �������캯���ĵ���" << endl;
}
int main()
{

    // test1();
    // test2();
    test3();

    system("pause");
    return 0;
}