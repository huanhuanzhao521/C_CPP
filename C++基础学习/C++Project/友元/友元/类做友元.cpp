#include <iostream>
#include <string>

using namespace std;


// 

class Building;
class GoodGay {
public:
    GoodGay();
    void visit();  // 参观函数，访问building中的属性
    Building* bui;


};

class Building {
    friend class GoodGay;
public:
    Building();
    string m_sittingRoom; // 客厅

private:
    string m_bedroom;
};

// 类外写成员函数
Building::Building()
{
    m_sittingRoom = "客厅";
    m_bedroom = "卧室";
}

GoodGay::GoodGay()
{
    // 创建建筑物对象
    bui = new Building;
}

void GoodGay::visit()
{
    cout << "好基友类正在访问: " << bui->m_sittingRoom << endl;
    cout << "好基友类正在访问: " << bui->m_bedroom << endl;
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