#include <iostream>
using namespace std;

/*
int main()
{
    int a = 10;
    // 1�����ñ����ʼ��
    int& b = a;
    // 2�������ڳ�ʼ���󣬲����Ըı�
    int c = 20;
    b = c; // ��ֵ�����������Ǹ�������

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;

    system("pause");
    return 0;
}
*/

// ��������������

// ��������
/*
// 1��ֵ����
void swap01(int a, int b)
{
    int tmp = a;
    a = b;
    b = tmp;
    cout << "swap01 a = " << a << endl;
    cout << "swap01 b = " << b << endl;
}

// 2����ַ����
void swap02(int* a, int* b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;

    cout << "swap02 a = " << *a << endl;
    cout << "swap02 b = " << *b << endl;
}
*/
// 3�����ô���
/*
void swap03(int& a, int& b)
{
    int tmp = a;
    a = b;
    b = tmp;

    cout << "swap03 a = " << a << endl;
    cout << "swap03 b = " << b << endl;
}
*/
/*
int main()
{
    int a = 10;
    int b = 20;
    /*
    swap01(a, b);// ֵ���ݣ��ββ�������ʵ��

    cout << "ֵ���� a = " << a << endl;
    cout << "ֵ���� b = " << b << endl;
    cout << "================ "<< endl;

    swap02(&a, &b); // ��ַ���ݣ��βλ�����ʵ��
    cout << "��ַ���� a = " << a << endl;
    cout << "��ַ���� b = " << b << endl;
    cout << "================ " << endl;
    */
/*
    swap03(a, b); // ���ô��ݣ��βλ�����ʵ��
    cout << "���ô��� a = " << a << endl;
    cout << "���ô��� b = " << b << endl;


    system("pause");
    return 0;
}
*/

/*
// �����������ķ���ֵ
// 1����Ҫ���ؾֲ�����������
int& test01()
{
    int a = 10; // �ֲ�����������������е�ջ��
    return a;
}

// 2�������ĵ��ÿ�����Ϊ��ֵ
int& test02()
{
    static int a = 10; // ��̬���������ȫ����
    return a;
}
int main()
{
    // 1����Ҫ���ؾֲ�����������
    int &ref = test01();
    cout << "ref = " << ref << endl; // ��һ�α���������������a���ڴ��Ѿ��ͷ�
    // 2�������ĵ��ÿ�����Ϊ��ֵ
    cout << "==================== " << endl;
    int& ref02 = test02();
    cout << "test02 ref02 = " << ref02 << endl;
    cout << "test02 ref02 = " << ref02 << endl;
    test02() = 1000; // �൱��a = 1000; ref02 �� a �ı�������������ķ���ֵ�����ã�����������ÿ�����Ϊ��ֵ��
    cout << "test02 ref02 = " << ref02 << endl;
    cout << "test02 ref02 = " << ref02 << endl;
    system("pause");
    return 0;
}
*/

// ���õı���
// ת��Ϊ int *const ref = &a;
/*
void func(int& ref)
{
    ref = 100; // ref�����ã�ת��Ϊ*ref = 100;
}
int main()
{
    int a = 10;
    int& ref = a;
    ref = 20; // �ڲ�����ref�����ã��Զ�������ת��Ϊ *ref = 20;
    cout << "a = " << a << endl;
    cout << "ref = " << ref << endl;

    func(a);

    system("pause");
    return 0;
}
*/

// ��������

// ��ӡ����
void showValue(const int& value)
{
    // value = 1000; // ���ʽ�����ǿ��޸ĵ���ֵ
    cout << "value = " << value << endl;
}
int main()
{
    /*
    int a = 10;
    int& ref = a;
    */
    // int &ref =10; // ������Ҫһ��Ϸ����ڴ�ռ䣬������д���
    // ����const֮�󣬱������������޸� int tmp =10; int &ref = tmp;
    // const int &ref = 10;  // ���ñ�������һ��Ϸ����ڴ�ռ�,����const֮���Ϊֻ���������޸�

    int a = 100;
    showValue(a);

    cout << "a = " << a << endl;

    system("pause");
    return 0;
}