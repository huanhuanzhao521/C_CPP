#include <iostream>

using namespace std;

// ������
class Animal {
public:
    int m_age;
};

// ������̳�  ����������⣻
// �ڼ̳�֮ǰ���Ϲؼ��� virtual ����Ϊ��̳�
// Animal ���Ϊ �����
// ����
class Sheep : virtual public Animal {
public:

};

// ������
class Tuo : virtual public Animal {

};

// ������
class SheepTuo :public Sheep, public Tuo {

};

void test01()
{
    SheepTuo sheeptuo;
    sheeptuo.Sheep::m_age = 18;
    sheeptuo.Tuo::m_age = 28;

    // �����μ̳е�ʱ����������ӵ����ͬ�����ݣ���Ҫ�������������֣�
    cout << "sheeptuo.m_age = " << sheeptuo.Sheep::m_age << endl;
    cout << "sheeptuo.m_age = " << sheeptuo.Tuo::m_age << endl;
    cout << "sheeptuo.m_age = " << sheeptuo.m_age << endl;

    // �����������֪��  ֻҪ��һ�ݾͿ����ˣ����μ̳е������������ݣ���Դ�˷�
}

int main()
{

    test01();
    system("pause");
    return 0;
}