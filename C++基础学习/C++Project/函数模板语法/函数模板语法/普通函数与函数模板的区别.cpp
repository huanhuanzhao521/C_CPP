#include <iostream>
using namespace std;

// ��ͨ����
int mmyAdd01(int a, int b)
{
    return a + b;
}


// ����ģ��
template <typename T>
T mmyAdd02(T a, T b)
{
    return a + b;
}

void test01()
{
    int a = 10;
    int b = 20;
    char c = 'c';
    cout << mmyAdd01(a, c) << endl;

    // �Զ������Ƶ�  ���ᷢ����ʽ����ת��
    // cout << mmyAdd02(a, c) << endl;

    // ��ʾָ������  �ᷢ����ʽ����ת��
    cout << mmyAdd02<int>(a, c) << endl;
}

int main()
{

    test01();
    
    system("pause");
    return 0;
}