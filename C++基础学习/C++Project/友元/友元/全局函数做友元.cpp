#include <iostream>
#include <string>

using namespace std;

// ������
class Building {
    // goodGayȫ�ֺ�����Building�ĺ����ѣ����Է���Building�е�˽�г�Ա
    friend void goodGay(Building* building);
public:
    Building()
    {
        m_sittingRoom = "����";
        m_BedRoom = "����";
    }
        
    string m_sittingRoom;  // ����

private:
    string m_BedRoom;     // ����

};

// ȫ�ֺ���

void goodGay(Building* building)
{
    cout << "�û���ȫ�ֺ��� ���ڷ���" << building->m_sittingRoom << endl;
    cout << "�û���ȫ�ֺ��� ���ڷ���" << building->m_BedRoom << endl;
}

void test01()
{
    Building building;
    goodGay(&building);
}

int main()
{

    test01();
    system("pause");
    return 0;
}