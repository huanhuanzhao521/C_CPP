#include <iostream>

using namespace std;


// 常函数
class Person {
public:

    // this指针的本质是  指针常量，指针的指向是不可以修改的
    // const Person *const this;
    // 在成员函数后面加const,修饰的是this 指向，让指针指向的值也不可以修改；
    void showPerson() const
    {
        this->m_b = 100;  // 加上mutable
        // this->m_a = 100;
        // this = nullptr; // this指针不可以修改指针指向的
    }

    void func()
    {
        m_a = 100;
    }

    int m_a;
    mutable int m_b; // 特殊变量，即使在常函数中，也可以修改这个值；
};


void test01()
{
    Person p;
    p.showPerson();
}
// 常对象

void test02()
{
    const Person p; // 在对象前加const ,变为常对象；
    // p.m_a = 100;  // 常对象不允许修改指针指向的值
    p.m_b = 200;  // m_b是特殊值，在常对象下也可以修改；

    // 常对象只能调用常函数
    p.showPerson();
    // p.func();  // 常对象不可以调用普通的成员函数，因为普通成员函数可以修改属性；
}

int main()
{


    system("pause");
    return 0;
}