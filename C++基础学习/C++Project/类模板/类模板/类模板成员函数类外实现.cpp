#include<iostream>
#include <string>

using namespace std;

template <typename T1, typename T2>
class Person
{
public:
    Person(T1 name, T2 age);
    //{
    //    this->m_age = age;
    //    this->m_name = name;
    //}
    void showPerson();
    //{
    //    cout << "������" << this->m_name << " ���䣺" << this->m_age << endl;
    //}
    T1 m_name;
    T2 m_age;
};

// ���캯��������ʵ��
template <typename T1, typename T2>
Person<T1, T2>::Person(T1 name, T2 age)
{
    this->m_name = name;
    this->m_age = age;
}

// ��Ա����������ʵ��
template <typename T1, typename T2>
void Person<T1, T2>::showPerson()
{
    cout << "������" << this->m_name << " ���䣺" << this->m_age << endl;
}

void test01()
{
    Person<string, int> p("Tom", 20);
    p.showPerson();
}

int main()
{

    test01();
    system("pause");
    return 0;
}