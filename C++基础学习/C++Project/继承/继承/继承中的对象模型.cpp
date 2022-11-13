#include <iostream>

using namespace std;

class Base {
public:
    int m_a;
protected:
    int m_b;
private:
    int m_c;
};

class Son :public Base {
public:
    int m_d;
};

// 利用开发人员命令提示工具查看对象模型
// cl /d1 reportSingleClassLayout类名 文件名
//
//

void test01()
{
    // 父类中的所有非静态成员属性 都会被子类继承下去；
    // 父类中的私有成员属性 是被编译器给隐藏了，因此访问不到，但是确实是被继承下去了；

    cout << "sizeof（Son）= " << sizeof(Son) << endl;
}

int main()
{
    test01();

    system("pause");
    return 0;
}