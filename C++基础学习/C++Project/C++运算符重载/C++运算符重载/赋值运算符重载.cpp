#include <iostream>

using namespace std;

class Person {
public:

    Person(int age)
    {
        m_age = new int(age);
    }

    ~Person()
    {
        if (m_age != nullptr) {
            delete m_age;
            m_age = nullptr;
        }
    }

    // 重载赋值运算符
    Person& operator=(Person& p)
    {
        // 编译器提供的浅拷贝
        // m_age = p.m_age;

        // 应该先判断是否有属性在堆区，如果有先释放干净，然后在进行拷贝
        if (m_age != nullptr) {
            delete m_age;
            m_age = nullptr;
        }

        // 深拷贝
        m_age = new int(*p.m_age);

        // 返回对象本身
        return *this;
    }
    int *m_age;
};


void test01()
{
    Person p1(18);

    Person p2(20);

    p2 = p1;

    Person p3(30);

    p3 = p2 = p1;

    cout << "p1的年龄为：" << *p1.m_age << endl;

    cout << "p2的年龄为：" << *p2.m_age << endl;

    cout << "p2的年龄为：" << *p3.m_age << endl;

}

int main()
{
    test01();

    system("pause");
    return 0;
}