#include <iostream>
#include <string>

using namespace std;

// 类模板对象做函数参数
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
        cout << "姓名：" << this->m_name << "  年龄：" << this->m_age << endl;
    }
    T1 m_name;
    T2 m_age;
};

// 1、指定传入类型
void printPerson1(Person<string,int> &p)
{
    p.showPerson();
}
void test01()
{
    Person<string, int> p1("孙悟空", 1000);
    printPerson1(p1);
}
// 2、参数模板化
template <typename T1, typename T2>
void printPerson2(Person<T1,T2> &p)
{
    p.showPerson();

    cout << "T1的类型为：" << typeid(T1).name() << endl;
    cout << "T2的类型为：" << typeid(T2).name() << endl;
}
void test02()
{
    Person<string, int> p2("猪八戒", 999);
    printPerson2(p2);
}
// 3、整个类模板化
template <typename T>
void printPerson3(T &p)
{
    p.showPerson();
    cout << "T的数据类型为：" << typeid(T).name() << endl;
}
void test03()
{
    Person<string, int> p3("唐僧", 100);
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