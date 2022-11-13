#include <iostream>

using  namespace std;

// 重载递增运算符

// 定义一个自定义的整型

class MyInteger {
    friend ostream& operator << (ostream& out, MyInteger mint);
public:
    MyInteger()
    {
        m_num = 0;
    }

    // 重载前置++ 运算符,返回引用是为了一直对一个数据进行递增操作
    MyInteger& operator++()
    {
        // 先进行++运算
        m_num++;

        // 再将自身做返回
        return *this;
    }

    // 重载后置++ 运算符
    // void operator++(int) ,int 代表的是占位参数，可以用于区分前置和后置 递增；
    MyInteger operator++(int)
    {
        // 先记录当时的结果
        MyInteger tmp = *this;
        // 后递增
        m_num++;
        
        // 最后将记录结果做返回
        return tmp;
    }

private:
    int m_num;
};

// 重载左移运算符
ostream& operator << (ostream& out, MyInteger mint)
{
    out << "mint = " << mint.m_num;
    return out;
}

void test01()
{
    MyInteger myint;
    cout << ++(++myint) << endl;
    cout << myint << endl;
}

void test02()
{
    MyInteger myint;
    cout << myint++ << endl;
    cout << myint << endl;
}

int main()
{

    // test01();
    test02();

    system("pause");
    return 0;
}