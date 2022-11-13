#include <iostream>
#include <string>
using namespace std;

class Animal {
public:
    Animal() {
        cout << "Animal 的构造函数调用" << endl;
    }
    // 利用虚析构可以解决 父类指针释放子类对象时不干净的问题
    //virtual ~Animal() {
    //    cout << "Animal 的虚析构函数调用" << endl;
    //}
    // 纯虚析构 需要有声明也需要有实现
    // 有了纯虚析构之后，这个类也属于抽象类，无法实例化；
    virtual ~Animal() = 0;
    virtual void speak() = 0;
};

 Animal::~Animal() 
{
     cout << "Animal 的纯虚析构函数调用" << endl;
}
class Cat : public Animal {
public:
    Cat(string name) {
        cout << "Cat 的构造函数调用" << endl;
        m_name = new string(name);
    }
    ~Cat()
    {
        if (m_name != nullptr) {
            cout << "Cat 的析构函数调用" << endl;
            delete m_name;
            m_name = nullptr;
        }
    }
    virtual void speak() {
        cout << *m_name <<" 小猫在说话" << endl;
    }

    string* m_name;
};


void test01()
{
    Animal* ani = new Cat("Tom");
    ani->speak();
    // 父类的指针在析构的时候，不会调用子类中析构函数，
    // 导致子类如果有堆区属性，出现内存泄露；
    delete ani;
}
int main()
{

    test01();
    system("pause");
    return 0;
}
