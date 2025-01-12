#include <iostream>

using namespace std;


// this指针的使用
// 解决名称冲突；
// 返回return *this;
class Person {
public:
    Person(int age)
    {
        // this 指针指向的是 被调用成员函数 所属的对象
        this->age = age;
    }

    // void PersonAddAge(Person &p)
    Person& PersonAddAge(Person& p)
    {
        this->age += p.age;

        // this指向p2的指针，而*this指向的就是p2这个对象的本体；
        return *this;
    }
    int age;
};


// 解决名称冲突；
void test01()
{
    Person p1(18);
    cout << "P1的年龄为：" << p1.age << endl;
}

// 返回对象本身 return *this;
void test02()
{
    Person p1(10);

    Person p2(10);

    // p2.PersonAddAge(p1);
    // 链式编程思想
    p2.PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1);

    cout << "p2的年龄为：" << p2.age << endl;
}

int main()
{

    // test01();
    test02();
    system("pause");
    return 0;
}