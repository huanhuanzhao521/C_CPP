#include <iostream>
#include <string>

using namespace std;

class AbstractDrink {
public:
    // 煮水
    virtual void Boil() = 0;
    // 冲泡
    virtual void Brew() = 0;
    // 倒入杯中
    virtual void PourInCup() = 0;
    // 加入辅料
    virtual void PutSomething() = 0;

    // 制作饮品
    void makeDrink()
    {
        Boil();
        Brew();
        PourInCup();
        PutSomething();
    }
};

class Coffee : public AbstractDrink {
public:
    // 煮水
    virtual void Boil() {
        cout << "煮农夫山泉水" << endl;
    }
    // 冲泡
    virtual void Brew() {
        cout << "冲泡咖啡" << endl;
    }
    // 倒入杯中
    virtual void PourInCup() {
        cout << "倒入马克杯中" << endl;
    }
    // 加入辅料
    virtual void PutSomething() {
        cout << "加入糖和牛奶" << endl;
    }
};

class Tea : public AbstractDrink {
public:
    // 煮水
    virtual void Boil() {
        cout << "煮矿泉水" << endl;
    }
    // 冲泡
    virtual void Brew() {
        cout << "冲泡茶叶" << endl;
    }
    // 倒入杯中
    virtual void PourInCup() {
        cout << "倒入大肚杯中" << endl;
    }
    // 加入辅料
    virtual void PutSomething() {
        cout << "加入枸杞" << endl;
    }
};

void dowork(AbstractDrink* drink)
{
    drink->makeDrink();
    delete drink;
}

void test01()
{
    // 制作咖啡
    dowork(new Coffee);

    cout << "-----------------" << endl;
    // 制作茶
    dowork(new Tea);
}

int main()
{

    test01();
    system("pause");
    return 0;
}