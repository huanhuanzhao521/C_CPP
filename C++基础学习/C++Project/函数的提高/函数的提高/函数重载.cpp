#include <iostream>
using namespace std;

/*
void func()
{
    cout << "func �ĵ���" << endl;
}

void func(int a)
{
    cout << "func (int a)�ĵ���" << endl;
}

void func(double a)
{
    cout << "func (double a)�ĵ���" << endl;
}

void func(int a, double b)
{
    cout << "func (int a, double b)�ĵ���" << endl;
}

void func(double a, int b)
{
    cout << "func (double a, int b)�ĵ���" << endl;
}

// ע����������ķ���ֵ��������Ϊ�������ص�����
int main()
{
    // func();
    // func(10);
    // func(3.14);
    func(10, 3.14);
    func(3.14, 10);
    system("pause");
    return 0;
}
*/

// �������ص�ע������

// 1��������Ϊ���ص�����
void func(int &a)
{
    cout << "func(int &a) ����" << endl;
}

void func(const int& a)
{
    cout << "func(const int &a) ����" << endl;
}

// 2��������������Ĭ�ϲ���
void func2(int a,int b = 10)
{
    cout << "func(int a,int b) ����" << endl;
}

void func2(int a)
{
    cout << "func(int a) ����" << endl;
}

int main()
{
    // int a = 10;
    // func(a);

    // func(10);

    // func2(10); // ��������������Ĭ�ϲ��������ֶ�����,������������������������

    system("pause");
    return 0;
}