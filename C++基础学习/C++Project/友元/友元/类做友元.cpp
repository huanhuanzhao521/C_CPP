#include <iostream>
#include <string>

using namespace std;


// 

class Building;
class GoodGay {
public:
    GoodGay();
    void visit();  // �ιۺ���������building�е�����
    Building* bui;


};

class Building {
    friend class GoodGay;
public:
    Building();
    string m_sittingRoom; // ����

private:
    string m_bedroom;
};

// ����д��Ա����
Building::Building()
{
    m_sittingRoom = "����";
    m_bedroom = "����";
}

GoodGay::GoodGay()
{
    // �������������
    bui = new Building;
}

void GoodGay::visit()
{
    cout << "�û��������ڷ���: " << bui->m_sittingRoom << endl;
    cout << "�û��������ڷ���: " << bui->m_bedroom << endl;
}

void test01()
{
    GoodGay good;
    good.visit();
}

int main()
{

    test01();
    system("pause");
    return 0;
}