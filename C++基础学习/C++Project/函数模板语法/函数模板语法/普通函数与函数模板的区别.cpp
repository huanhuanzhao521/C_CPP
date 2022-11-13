#include <iostream>
using namespace std;

// 普通函数
int mmyAdd01(int a, int b)
{
    return a + b;
}


// 函数模板
template <typename T>
T mmyAdd02(T a, T b)
{
    return a + b;
}

void test01()
{
    int a = 10;
    int b = 20;
    char c = 'c';
    cout << mmyAdd01(a, c) << endl;

    // 自动类型推导  不会发生隐式类型转换
    // cout << mmyAdd02(a, c) << endl;

    // 显示指定类型  会发生隐式类型转换
    cout << mmyAdd02<int>(a, c) << endl;
}

int main()
{

    test01();
    
    system("pause");
    return 0;
}