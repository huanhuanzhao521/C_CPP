#include <iostream>
using namespace std;


// 函数模板
void swapInt(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

// 交换两个浮点型
void swapDouble(double& a, double& b)
{
    double tmp = a;
    a = b;
    b = tmp;
}

//void test01()
//{
//    int a = 10;
//    int b = 20;
//    swapInt(a, b);
//    cout << "a = " << a << " b = " << b << endl;
//
//    double c = 1.1;
//    double d = 2.2;
//    swapDouble(c, d);
//    cout << "c = " << c << " d = " << d << endl;
//}

// 函数模板
template<typename T>  // 声明一个模板，告诉编译器后面代码中紧跟着的T不要报错，T是一个通用数据类型
void swapData(T& a, T& b)
{
    T tmp = a;
    a = b;
    b = tmp;
}

void test01()
{
    // 利用函数模板交换
    // 有两种方式使用函数模板
    // 1、自动类型推导
    int a = 10;
    int b = 20;
    /*swapData(a, b);
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;*/

    // 2、显示指定类型
    swapData<int>(a, b);
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
}
int main()
{

    test01();
    system("pause");
    return 0;
}