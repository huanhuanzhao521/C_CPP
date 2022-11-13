#include <iostream>
using namespace std;

/*
int main()
{
    int a = 10;
    // 1、引用必须初始化
    int& b = a;
    // 2、引用在初始化后，不可以改变
    int c = 20;
    b = c; // 赋值操作，而不是更改引用

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;

    system("pause");
    return 0;
}
*/

// 引用做函数参数

// 交换函数
/*
// 1、值传递
void swap01(int a, int b)
{
    int tmp = a;
    a = b;
    b = tmp;
    cout << "swap01 a = " << a << endl;
    cout << "swap01 b = " << b << endl;
}

// 2、地址传递
void swap02(int* a, int* b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;

    cout << "swap02 a = " << *a << endl;
    cout << "swap02 b = " << *b << endl;
}
*/
// 3、引用传递
/*
void swap03(int& a, int& b)
{
    int tmp = a;
    a = b;
    b = tmp;

    cout << "swap03 a = " << a << endl;
    cout << "swap03 b = " << b << endl;
}
*/
/*
int main()
{
    int a = 10;
    int b = 20;
    /*
    swap01(a, b);// 值传递，形参不会修饰实参

    cout << "值传递 a = " << a << endl;
    cout << "值传递 b = " << b << endl;
    cout << "================ "<< endl;

    swap02(&a, &b); // 地址传递，形参会修饰实参
    cout << "地址传递 a = " << a << endl;
    cout << "地址传递 b = " << b << endl;
    cout << "================ " << endl;
    */
/*
    swap03(a, b); // 引用传递，形参会修饰实参
    cout << "引用传递 a = " << a << endl;
    cout << "引用传递 b = " << b << endl;


    system("pause");
    return 0;
}
*/

/*
// 引用做函数的返回值
// 1、不要返回局部变量的引用
int& test01()
{
    int a = 10; // 局部变量，存放在四区中的栈区
    return a;
}

// 2、函数的调用可以作为左值
int& test02()
{
    static int a = 10; // 静态变量存放在全局区
    return a;
}
int main()
{
    // 1、不要返回局部变量的引用
    int &ref = test01();
    cout << "ref = " << ref << endl; // 第一次编译器会做保留，a的内存已经释放
    // 2、函数的调用可以作为左值
    cout << "==================== " << endl;
    int& ref02 = test02();
    cout << "test02 ref02 = " << ref02 << endl;
    cout << "test02 ref02 = " << ref02 << endl;
    test02() = 1000; // 相当于a = 1000; ref02 是 a 的别名；如果函数的返回值是引用，这个函数调用可以作为左值；
    cout << "test02 ref02 = " << ref02 << endl;
    cout << "test02 ref02 = " << ref02 << endl;
    system("pause");
    return 0;
}
*/

// 引用的本质
// 转换为 int *const ref = &a;
/*
void func(int& ref)
{
    ref = 100; // ref是引用，转换为*ref = 100;
}
int main()
{
    int a = 10;
    int& ref = a;
    ref = 20; // 内部发现ref是引用，自动帮我们转换为 *ref = 20;
    cout << "a = " << a << endl;
    cout << "ref = " << ref << endl;

    func(a);

    system("pause");
    return 0;
}
*/

// 常量引用

// 打印数据
void showValue(const int& value)
{
    // value = 1000; // 表达式必须是可修改的左值
    cout << "value = " << value << endl;
}
int main()
{
    /*
    int a = 10;
    int& ref = a;
    */
    // int &ref =10; // 引用需要一块合法的内存空间，因此这行错误
    // 加上const之后，编译器将代码修改 int tmp =10; int &ref = tmp;
    // const int &ref = 10;  // 引用必须引用一块合法的内存空间,加上const之后变为只读，不可修改

    int a = 100;
    showValue(a);

    cout << "a = " << a << endl;

    system("pause");
    return 0;
}