#include <iostream>
#include <string>

using namespace std;


class Person1
{
public:
    void showPerson1()
    {
        cout << "Person1 show!" << endl;
    }
};


class Person2
{
public:
    void showPerson2()
    {
        cout << "Person2 show!" << endl;
    }
};

template <typename T>
class MyClass
{
public:
    // 类模板中的成员函数
    void func1()
    {
        obj.showPerson1();
    }
    void func2()
    {
        obj.showPerson2();
    }
    T obj;
};

void test01()
{
    /*MyClass<Person1> m;
    m.func1();*/
    MyClass<Person2> m;
    m.func2();
}
int main()
{

    test01();
    system("pause");
    return 0;
}