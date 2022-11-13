#include <iostream>
#include <string>

using namespace std;

// ��ģ���������������
template <typename T1, typename T2>
class Person
{
public:
    Person(T1 name, T2 age)
    {
        this->m_age = age;
        this->m_name = name;
    }
    void showPerson()
    {
        cout << "������" << this->m_name << "  ���䣺" << this->m_age << endl;
    }
    T1 m_name;
    T2 m_age;
};

// 1��ָ����������
void printPerson1(Person<string,int> &p)
{
    p.showPerson();
}
void test01()
{
    Person<string, int> p1("�����", 1000);
    printPerson1(p1);
}
// 2������ģ�廯
template <typename T1, typename T2>
void printPerson2(Person<T1,T2> &p)
{
    p.showPerson();

    cout << "T1������Ϊ��" << typeid(T1).name() << endl;
    cout << "T2������Ϊ��" << typeid(T2).name() << endl;
}
void test02()
{
    Person<string, int> p2("��˽�", 999);
    printPerson2(p2);
}
// 3��������ģ�廯
template <typename T>
void printPerson3(T &p)
{
    p.showPerson();
    cout << "T����������Ϊ��" << typeid(T).name() << endl;
}
void test03()
{
    Person<string, int> p3("��ɮ", 100);
    printPerson3(p3);
}

int main()
{

    test01();
    test02();
    test03();
    system("pause");
    return 0;
}