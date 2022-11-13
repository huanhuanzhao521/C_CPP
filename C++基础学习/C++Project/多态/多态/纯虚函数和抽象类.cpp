#include <iostream>
#include <string>

using namespace std;

// 纯虚函数和抽象类
class Base {
public:
    // 纯虚函数
    // 只要有一个纯虚函数，这个类称为 抽象类；
    virtual void func() = 0;
};

class Son : public Base {
public:
    virtual void func()
    {
        cout << "func 函数的调用" << endl;
    }
};

void test01()
{
    // Base b; // 抽象类是无法实例化对象
    // new Base; // 抽象类是无法实例化对象
    Son s; // 子类必须重写父类中的纯虚函数，否则无法实例化对象
    Base* ba = new Son;
    ba->func();
}

int main()
{

    test01();
    system("pause");
    return 0;
}