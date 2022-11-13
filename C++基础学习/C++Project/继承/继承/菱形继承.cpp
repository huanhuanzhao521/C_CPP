#include <iostream>

using namespace std;

// 动物类
class Animal {
public:
    int m_age;
};

// 利用虚继承  解决菱形问题；
// 在继承之前加上关键字 virtual ，变为虚继承
// Animal 类称为 虚基类
// 羊类
class Sheep : virtual public Animal {
public:

};

// 骆驼类
class Tuo : virtual public Animal {

};

// 羊驼类
class SheepTuo :public Sheep, public Tuo {

};

void test01()
{
    SheepTuo sheeptuo;
    sheeptuo.Sheep::m_age = 18;
    sheeptuo.Tuo::m_age = 28;

    // 当菱形继承的时候，两个父类拥有相同的数据，需要加以作用域区分；
    cout << "sheeptuo.m_age = " << sheeptuo.Sheep::m_age << endl;
    cout << "sheeptuo.m_age = " << sheeptuo.Tuo::m_age << endl;
    cout << "sheeptuo.m_age = " << sheeptuo.m_age << endl;

    // 这份数据我们知道  只要有一份就可以了，菱形继承导致数据有两份，资源浪费
}

int main()
{

    test01();
    system("pause");
    return 0;
}