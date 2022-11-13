#include <iostream>
using namespace std;

class Person
{
public:
    Person()
    {
        cout << "Person 的默认构造函数调用" << endl;
    }
    Person(int age)
    {
        m_age = age;
        cout << "Person 有参构造函数的调用" << endl;
    }
    Person(const Person& p)
    {
        m_age = p.m_age;
        cout << "Person 的拷贝构造函数的调用" << endl;
    }

    ~Person()
    {
        cout << "Person 的析构函数调用" << endl;
    }

    int m_age;
};

// ① 使用一个已经创建完毕的对象来初始化一个新对象
void test1()
{
    Person p1(10);
    Person p2(p1);
}
// ② 值传递的方式给函数参数传值
void dowork(Person p)
{

}
void test2()
{
    Person p;
    dowork(p);
}
// ③ 以值方式返回局部对象

Person dowork2()
{
    Person p3;
    cout << "P3 默认构造函数的调用" << endl;
    return p3;
}
void test3()
{
    Person p = dowork2();
    cout << "test3 拷贝构造函数的调用" << endl;
}
int main()
{

    // test1();
    // test2();
    test3();

    system("pause");
    return 0;
}