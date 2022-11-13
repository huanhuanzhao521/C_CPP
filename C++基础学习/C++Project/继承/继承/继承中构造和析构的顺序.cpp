#include <iostream>

using namespace std;

class Base {
public:
    Base()
    {
        cout << "Base 的构造函数！" << endl;
    }
    ~Base()
    {
        cout << "Base 的析构函数！" << endl;
    }
};

class Son :public Base {
public:
    Son()
    {
        cout << "Son 的构造函数！" << endl;
    }
    ~Son()
    {
        cout << "Son 的析构函数！" << endl;
    }
};

void test01()
{
    // Base b1;
    // 继承中的构造和析构如下
    // 先构造父类，在构造子类，析构的顺序和构造的顺序相反；
    Son s1;
}
int main()
{

    test01();
    system("pause");
    return 0;
}