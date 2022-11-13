#include <iostream>
#include <string>

using namespace std;

class Building;

class GoodGay {
public:
    GoodGay();
    void visit(); // visit �������Է���building �е�˽�г�Ա��
    void visit2(); // visit2 ���������Է���building �е�˽�г�Ա��

    Building* building;
};

class Building {
    // ���߱����� GoodGay ���µ�visit��Ա������Ϊ����ĺ����ѣ����Է���˽�г�Ա
    friend void GoodGay::visit();
public:
    Building();

    string m_sittingRoom;

private:
    string m_bedRoom;
};

Building::Building()
{
    m_sittingRoom = "����";
    m_bedRoom = "����";
}


GoodGay::GoodGay()
{
    building = new Building;
}
void GoodGay::visit()
{
    cout << "visit �������ڷ���Building �еģ�" << building->m_sittingRoom << endl;
    cout << "visit �������ڷ���Building �еģ�" << building->m_bedRoom << endl;
}
void GoodGay::visit2()
{
    cout << "visit2 �������ڷ���Building �еģ�" << building->m_sittingRoom << endl;
    // cout << "visit �������ڷ���Building �еģ�" << building->m_bedRoom << endl;
}

void test01()
{
    GoodGay gg;
    gg.visit();
    gg.visit2();
}

int main()
{

    test01();
    system("pause");
    return 0;
}