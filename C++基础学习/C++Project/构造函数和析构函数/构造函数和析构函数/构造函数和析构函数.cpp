#include <iostream>
using namespace std;

// 1、构造函数 进行初始化操作
class Person
{
public:
    // 1、构造函数
    Person()
    {
        cout << "Person构造函数的调用" << endl;
    }

    // 2、析构函数
    ~Person()
    {
        cout << "Person析构函数的调用" << endl;
    }
};


void test01()
{
    Person p; // 在栈上的数据，test01执行完毕后，释放这个对象
}
int main()
{
    // 
    test01();
    // Person p;

    system("pause");
    return 0;
}