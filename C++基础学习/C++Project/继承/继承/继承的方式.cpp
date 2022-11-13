#include <iostream>
using namespace std;


class Base1 {
public:
    int m_a;
protected:
    int m_b;
private:
    int m_c;
};

class Son1 :public Base1 {
public:
    void func()
    {
        m_a = 10; // 父类中的公共权限成员 到子类中依然是公共权限
        m_b = 100; // 父类中的保护权限成员 到子类中依然是保护权限
        // m_c = 1000;  // 父类中的私有权限成员，子类访问不到；
    }
};

void test01()
{
    Son1 s1;
    s1.m_a = 100;
    // s1.m_b = 100;  // 到son1中，m_b是保护成员，类外访问不到；
}


class Base2 {
public:
    int m_a;
protected:
    int m_b;
private:
    int m_c;
};

class Son2 :protected Base2 {
public:
    void func()
    {
        m_a = 100; // 父类中的公共成员，到子类中变为保护权限；
        m_b = 100; // 父类中的保护成员，到子类中变为保护权限；
        // m_c = 100; // 父类中的私有成员 子类访问不到
    }
};

void test02()
{
    Son2 s2;
    // s2.m_a = 100; // 在son2中，m_a变为保护权限，因此类外访问不到；
}

class Base3 {
public:
    int m_a;
protected:
    int m_b;
private:
    int m_c;
};
class Son3 :private Base3 {
public:
    void func()
    {
        m_a = 100; // 父类中公共成员，到子类中变为  私有成员
        m_b = 100; // 父类中保护成员，到子类中变为  私有成员
        // m_c = 100;  // 父类中的私有成员，子类访问不到；
    }
};
void test03()
{
    Son3 s3;
    // s3.m_a = 1000;  // 到son3中 变为私有成员，类外访问不到；
    // s3.m_b = 1000;  // 到son3中 变为私有成员，类外访问不到；
}

class GrandSon3 :public Son3 {
public:
    void func()
    {
        // m_a = 1000;   // 到了son3中，m_a变为私有，即使是儿子，也是访问不到；
        // m_b = 1000;   // 到了son3中，m_b变为私有，即使是儿子，也是访问不到；
    }
};


int main()
{

    system("pause");
    return 0;
}