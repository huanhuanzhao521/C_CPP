#include <iostream>
using namespace std;


class Person
{
public:
    /*
    Person()
    {
        cout << "Person 默认构造函数的调用" << endl;
    }*/
    Person(int age)
    {
        m_age = age;
        cout << "Person 有参造函数的调用" << endl;
    }
   /*
    Person(const Person& p)
    {
        m_age = p.m_age;
        cout << "Person 拷贝构造函数的调用" << endl;
    }*/
    ~Person()
    {
        cout << "Person 默认析构函数的调用" << endl;
    }

    int m_age;
};

/*
void test1()
{
    Person p1;
    p1.m_age = 18;
    Person p2(p1);
    cout << "P2的年龄为：" << p2.m_age << endl;
}
*/
void test2()
{
    Person p3(19);
    Person p4(p3);
    cout << "P4的年龄为：" << p4.m_age << endl;
}

int main()
{
    // test1();
    test2();
    system("pause");
    return 0;
}