#include <iostream>
using namespace std;

/*
void func()
{
    cout << "func 的调用" << endl;
}

void func(int a)
{
    cout << "func (int a)的调用" << endl;
}

void func(double a)
{
    cout << "func (double a)的调用" << endl;
}

void func(int a, double b)
{
    cout << "func (int a, double b)的调用" << endl;
}

void func(double a, int b)
{
    cout << "func (double a, int b)的调用" << endl;
}

// 注意事项：函数的返回值不可以作为函数重载的条件
int main()
{
    // func();
    // func(10);
    // func(3.14);
    func(10, 3.14);
    func(3.14, 10);
    system("pause");
    return 0;
}
*/

// 函数重载的注意事项

// 1、引用作为重载的条件
void func(int &a)
{
    cout << "func(int &a) 调用" << endl;
}

void func(const int& a)
{
    cout << "func(const int &a) 调用" << endl;
}

// 2、函数重载碰到默认参数
void func2(int a,int b = 10)
{
    cout << "func(int a,int b) 调用" << endl;
}

void func2(int a)
{
    cout << "func(int a) 调用" << endl;
}

int main()
{
    // int a = 10;
    // func(a);

    // func(10);

    // func2(10); // 当函数重载碰到默认参数，出现二义性,报错，尽量避免出现这种情况；

    system("pause");
    return 0;
}