#include <iostream>
#include <string>

using namespace std;

class Building;

class GoodGay {
public:
    GoodGay();
    void visit(); // visit 函数可以访问building 中的私有成员；
    void visit2(); // visit2 函数不可以访问building 中的私有成员；

    Building* building;
};

class Building {
    // 告诉编译器 GoodGay 类下的visit成员函数作为本类的好朋友，可以访问私有成员
    friend void GoodGay::visit();
public:
    Building();

    string m_sittingRoom;

private:
    string m_bedRoom;
};

Building::Building()
{
    m_sittingRoom = "客厅";
    m_bedRoom = "卧室";
}


GoodGay::GoodGay()
{
    building = new Building;
}
void GoodGay::visit()
{
    cout << "visit 函数正在访问Building 中的：" << building->m_sittingRoom << endl;
    cout << "visit 函数正在访问Building 中的：" << building->m_bedRoom << endl;
}
void GoodGay::visit2()
{
    cout << "visit2 函数正在访问Building 中的：" << building->m_sittingRoom << endl;
    // cout << "visit 函数正在访问Building 中的：" << building->m_bedRoom << endl;
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