#include <iostream>

using namespace std;

class Base {
public:
    int m_a;
protected:
    int m_b;
private:
    int m_c;
};

class Son :public Base {
public:
    int m_d;
};

// ���ÿ�����Ա������ʾ���߲鿴����ģ��
// cl /d1 reportSingleClassLayout���� �ļ���
//
//

void test01()
{
    // �����е����зǾ�̬��Ա���� ���ᱻ����̳���ȥ��
    // �����е�˽�г�Ա���� �Ǳ��������������ˣ���˷��ʲ���������ȷʵ�Ǳ��̳���ȥ�ˣ�

    cout << "sizeof��Son��= " << sizeof(Son) << endl;
}

int main()
{
    test01();

    system("pause");
    return 0;
}