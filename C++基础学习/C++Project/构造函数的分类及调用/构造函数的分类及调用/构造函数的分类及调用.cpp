#include <iostream>
using namespace std;

// 分类
class Person
{
public:
    // 默认构造函数
    Person()
    {
        cout << "Person 构造函数的调用..." << endl;
    }
    // 有参构造函数
    Person(int a)
    {
        age = a;
        cout << "Person(int a) 有参构造函数的调用..." << endl;
    }
    // 拷贝构造函数
    Person(const Person &p)
    {
        // 将传入的人身上的所有属性，拷贝到我（当前对象）身上
        age = p.age;
        cout << "Person(const Person &p) 拷贝构造函数的调用..." << endl;
    }
    ~Person()
    {
        cout << "Person 析构函数的调用..." << endl;
    }
// private:
    int age;
};
// 调用
void test01()
{
    // 1、括号法
    Person p1; // 默认构造函数的调用
    Person p2(10);

    // 拷贝构造函数的调用
    Person p3(p2);

    // 注意事项：
    // 调用默认构造函数的时候，不要加（）；
    // Person p1();  这行代码编译器会认为这是一个函数的声明；不会认为在创建对象；
    // cout << "p2的年龄为：" << p2.age << endl;
    // cout << "p2的年龄为：" << p3.age << endl;
    // 
    // 2、显示法
    Person p4;
    Person p5 = Person(10); // 有参构造

    Person p6 = Person(p5);

    // Person(10); // 匿名对象，当前行执行结束后，系统会立即回收掉匿名的对象
    // 注意事项2：不要利用拷贝构造函数 初始化 匿名对象；
    // Person(p3); 编译器会认为 Person(p3)  等价于  Person p3; 对象的声明

    // 3、隐式转换法
    Person p7 = 10; // 相当于 Person p7 = Person(10); 有参构造
    Person p8 = p7; // 拷贝构造函数，Person p8 = Person(p7);

    
}
int main()
{

    test01();
    system("pause");
    return 0;
}