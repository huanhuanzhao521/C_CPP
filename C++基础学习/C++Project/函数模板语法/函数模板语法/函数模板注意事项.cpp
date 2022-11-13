#include <iostream>
using namespace std;

template <typename T>
void SwapData(T& a, T& b)
{
    T tmp = a;
    a = b;
    b = tmp;
}

// 1、自动推导类型，必须推导出一致的数据类型T才可以使用
void test1()
{
    int a = 10;
    int b = 20;
    char c = 'c';

    SwapData(a, b);  // 正确
    // SwapData(a, c); // 错误，推导不出一致的T类型
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
}

// 2、模板必须要确定出T的数据类型，才可以使用
template <typename T>
void func()
{
    cout << "func函数调用" << endl;
}

void test2()
{
    // func(); // 错误
    func<int>();
}

int main()
{

    test1();
    test2();
    system("pause");
    return 0;
}