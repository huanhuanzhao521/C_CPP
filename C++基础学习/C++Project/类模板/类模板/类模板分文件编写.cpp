#include <iostream>
#include <string>

// ��һ�ֽ����ʽ��ֱ�Ӱ���Դ�ļ�
// #include "Person.cpp"

using namespace std;

// �ڶ��ֽ����ʽ����.h��.cpp�е�����д��һ�𣬽���׺����Ϊ.hpp�ļ�
#include "Person.hpp"

//template <typename T1,typename T2>
//class Person
//{
//public:
//    Person(T1 name, T2 age);
//    void showPerson();
//    T1 m_name;
//    T2 m_age;
//};
//
//// ����ʵ��
//template <typename T1, typename T2>
//Person<T1, T2>::Person(T1 name, T2 age)
//{
//    this->m_name = name;
//    this->m_age = age;
//}
//
//template <typename T1,typename T2>
//void Person<T1, T2>::showPerson()
//{
//    cout << "������" << this->m_name << " ���䣺" << this->m_age << endl;
//}
//
//void test01()
//{
//    Person <string, int> p("Jerry", 18);
//    p.showPerson();
//}
void test01()
{
    Person <string, int> p("Jerry", 18);
    p.showPerson();
}
int main()
{

    test01();
    system("pause");
    return 0;
}
