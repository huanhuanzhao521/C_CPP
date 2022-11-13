#include <iostream>
using namespace std;


// ����ģ��
void swapInt(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

// ��������������
void swapDouble(double& a, double& b)
{
    double tmp = a;
    a = b;
    b = tmp;
}

//void test01()
//{
//    int a = 10;
//    int b = 20;
//    swapInt(a, b);
//    cout << "a = " << a << " b = " << b << endl;
//
//    double c = 1.1;
//    double d = 2.2;
//    swapDouble(c, d);
//    cout << "c = " << c << " d = " << d << endl;
//}

// ����ģ��
template<typename T>  // ����һ��ģ�壬���߱�������������н����ŵ�T��Ҫ����T��һ��ͨ����������
void swapData(T& a, T& b)
{
    T tmp = a;
    a = b;
    b = tmp;
}

void test01()
{
    // ���ú���ģ�彻��
    // �����ַ�ʽʹ�ú���ģ��
    // 1���Զ������Ƶ�
    int a = 10;
    int b = 20;
    /*swapData(a, b);
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;*/

    // 2����ʾָ������
    swapData<int>(a, b);
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
}
int main()
{

    test01();
    system("pause");
    return 0;
}