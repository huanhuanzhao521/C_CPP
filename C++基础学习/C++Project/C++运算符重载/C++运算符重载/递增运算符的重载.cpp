#include <iostream>

using  namespace std;

// ���ص��������

// ����һ���Զ��������

class MyInteger {
    friend ostream& operator << (ostream& out, MyInteger mint);
public:
    MyInteger()
    {
        m_num = 0;
    }

    // ����ǰ��++ �����,����������Ϊ��һֱ��һ�����ݽ��е�������
    MyInteger& operator++()
    {
        // �Ƚ���++����
        m_num++;

        // �ٽ�����������
        return *this;
    }

    // ���غ���++ �����
    // void operator++(int) ,int �������ռλ������������������ǰ�úͺ��� ������
    MyInteger operator++(int)
    {
        // �ȼ�¼��ʱ�Ľ��
        MyInteger tmp = *this;
        // �����
        m_num++;
        
        // ��󽫼�¼���������
        return tmp;
    }

private:
    int m_num;
};

// �������������
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