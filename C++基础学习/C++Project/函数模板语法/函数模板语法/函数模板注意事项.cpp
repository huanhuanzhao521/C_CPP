#include <iostream>
using namespace std;

template <typename T>
void SwapData(T& a, T& b)
{
    T tmp = a;
    a = b;
    b = tmp;
}

// 1���Զ��Ƶ����ͣ������Ƶ���һ�µ���������T�ſ���ʹ��
void test1()
{
    int a = 10;
    int b = 20;
    char c = 'c';

    SwapData(a, b);  // ��ȷ
    // SwapData(a, c); // �����Ƶ�����һ�µ�T����
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
}

// 2��ģ�����Ҫȷ����T���������ͣ��ſ���ʹ��
template <typename T>
void func()
{
    cout << "func��������" << endl;
}

void test2()
{
    // func(); // ����
    func<int>();
}

int main()
{

    test1();
    test2();
    system("pause");
    return 0;
}