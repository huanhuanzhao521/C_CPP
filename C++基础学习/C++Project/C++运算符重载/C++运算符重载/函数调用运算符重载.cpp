#include <iostream>
#include <string>
using namespace std;

class MyPrint {
public:
    void operator()(string test)
    {
        cout << test << endl;
    }
};

void MyPrint02(string test)
{
    cout << test << endl;
}
void test01()
{
    MyPrint myPrint;
    myPrint("Hello World!"); // 由于使用起来非常类似于函数调用，因此称为仿函数；

    MyPrint02("Hello World 02");
}

// 仿函数非常灵活，没有固定的写法
// 加法类
class MyAdd {
public:
    int operator()(int num1, int num2)
    {
        return num1 + num2;
    }
};


void test02()
{
    MyAdd myadd;
    int ret = myadd(10, 20);

    cout << "ret = " << ret << endl;

    // 匿名函数对象
    cout << MyAdd()(30, 30) << endl;
}
int main()
{

    test01();

    test02();

    system("pause");
    return 0;
}