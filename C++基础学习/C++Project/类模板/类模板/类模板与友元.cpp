#include <iostream>
#include <string>

using namespace std;

//全局函数类外实现
template<class T1,class T2>
class Person;

template <typename T1, class T2>
void printPerson2(Person <T1, T2> p)
{
    cout << "类外实现---姓名：" << p.m_name << " 年龄：" << p.m_age << endl;
}

template <typename T1,typename T2>
class Person
{
    // 通过全局函数 打印Person信息  类内实现
    friend void printPerson(Person <T1, T2> p)
    {
        cout << "类内实现---姓名：" << p.m_name << " 年龄：" << p.m_age << endl;
    }

    // 全局函数类外实现
    // 增加空的模板参数列表
    // 如果全局函数是类外实现，需要让编译器提前知道这个函数的存在
    friend void printPerson2<>(Person <T1, T2> p);
public:
    Person(T1 name, T2 age)
    {
        this->m_age = age;
        this->m_name = name;
    }
private:
    T1 m_name;
    T2 m_age;
};

// 全局函数类内实现
void test01()
{
    Person<string, int> p("Tom", 20);
    printPerson(p);
}

void test02()
{
    Person<string, int> p2("Jerry", 20);
    printPerson2(p2);
}

int main()
{

    test01();
    test02();
    system("pause");
    return 0;
}