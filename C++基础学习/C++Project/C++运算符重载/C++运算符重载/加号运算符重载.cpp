#include <iostream>

using namespace std;

// 加号运算符重载

// 1、通过成员函数重载+运算符
class Person {
public:
    /*Person operator+(Person &p)
    {
        Person tmp;
        tmp.m_a = this->m_a + p.m_a;
        tmp.m_b = this->m_b + p.m_b;

        return tmp;
    }*/
    int m_a;
    int m_b;
};

// 2、通过全局函数重载+运算符
Person operator+(Person& p1, Person& p2)
{
    Person tmp;
    tmp.m_a = p1.m_a + p2.m_a;
    tmp.m_b = p1.m_b + p2.m_b;
    return tmp;
}

Person operator+(Person& p1, int num)
{
    Person tmp;
    tmp.m_a = p1.m_a + num;
    tmp.m_b = p1.m_b + num;
    return tmp;
}


void test01()
{
    Person p1;
    p1.m_a = 10;
    p1.m_b = 10;

    Person p2;
    p2.m_a = 10;
    p2.m_b = 10;

    // 成员函数重载+运算符的本质调用：
    // Person p3 = p1.operator+(p2);
    Person p3 = p1 + p2;

    // 全局函数重载+运算符的本质调用
    // Person p3 = operator+(p1, p2);

    cout << "p3.m_a = " << p3.m_a << endl;
    cout << "p3.m_b = " << p3.m_b << endl;

    // 运算符重载也可以发生 函数重载；
    Person p4 = p1 + 100;
    cout << "p4.m_a = " << p4.m_a << endl;
    cout << "p4.m_b = " << p4.m_b << endl;
}
int main()
{

    test01();
    system("pause");
    return 0;
}