#include <iostream>
#include <string>

// 第一种解决方式：直接包含源文件
// #include "Person.cpp"

using namespace std;

// 第二种解决方式：将.h和.cpp中的内容写到一起，将后缀名改为.hpp文件
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
//// 类外实现
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
//    cout << "姓名：" << this->m_name << " 年龄：" << this->m_age << endl;
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
