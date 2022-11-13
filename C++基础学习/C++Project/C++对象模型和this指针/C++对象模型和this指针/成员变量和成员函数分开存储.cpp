#include <iostream>

using namespace std;


class Person {
    

    int m_a; // 非静态成员变量，属于类的对象上

    static int m_b; // 静态成员变量，不属于类的对象上

    void func() {}; // 非静态成员函数，不属于类的对象上

    static void func2() {}; // 静态成员函数，不属于类的对象上
};

void test01()
{
    Person p;

    // 空对象占用的内存空间为：1
    // C++ 编译器会给每个对象也分配一个字节，是为了区分空对象占内存的位置
    // 每个空对象也应该有一个独一无二的内存地址；
    cout << "sizeof(p) p = " << sizeof(p) << endl;
}

int main()
{
    test01();
    system("pause");
    return 0;
}