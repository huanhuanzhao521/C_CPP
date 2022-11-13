#include <iostream>

using namespace std;

class Person {
    friend ostream& operator<<(ostream& cout, Person& p);
public:
    // 利用成员函数重载左移操作符,p.operator<<(cout),简化成 p<<cout;
    // 不能利用成员函数重载 << 运算符，因为无法实现，cout 在左侧；

    /*void operator<<(cout)
    {

    }*/
    Person(int a, int b)
    {
        m_a = a;
        m_b = b;
    }
private:
    int m_a;
    int m_b;
};

// 只能利用全局函数重载 << 运算符,本质 operator<<(cout,p),简化成 cout<<p;
ostream& operator<<(ostream &cout, Person &p)
{
    cout << "m_a = " << p.m_a << "  m_b = " << p.m_b;
    return cout;
}
void test01()
{

    Person p(10, 10);
    //p.m_a = 10;
    //p.m_b = 10;

    // cout << "p.m_a = " << p.m_a << endl;
    // cout << p;

    // 链式编程思想
    cout << p << "  hello world" << endl;
}

int main()
{

    test01();
    system("pause");
    return 0;
}