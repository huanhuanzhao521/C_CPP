#include <iostream>
#include <string>
#include "myArray.hpp"

using namespace std;

/*
*  案例描述：实现一个通用的数组类，要求如下：
* 可以对内置数据类型以及自定义数据类型的数据进行存储
* 将数组中的数据存储到堆区
* 构造函数中可以传入数组的容量
* 提供对应的拷贝构造函数以及operator=防止浅拷贝问题
* 提供尾插法和尾删法对数组中的数据进行增加和删除
* 可以通过下标的方式访问数组中的元素
* 可以获取数组中当前元素个数和数组的容量
* 
*/

void printArray(MyArray<int>& arr)
{
    for (size_t i = 0; i < arr.getSize(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void test01()
{
    MyArray <int>arr1(5);
    for (size_t i = 0; i < 5; i++) {
        // 利用尾插法向数组中插入数据
        arr1.Push_Back(i);
    }
    cout << "arr1的打印输出为：" << endl;
    printArray(arr1);

    cout << "arr1的容量为：" << arr1.getCapacity() << endl;
    cout << "arr1的大小为：" << arr1.getSize() << endl;

    MyArray <int>arr2(arr1);
    printArray(arr2);
    // 尾删法
    arr2.Pop_Back();
    cout << "arr2的容量为：" << arr2.getCapacity() << endl;
    cout << "arr2的大小为：" << arr2.getSize() << endl;

    //MyArray <int> arr2(arr1);
    //MyArray <int> arr3(100);
    //arr3 = arr1;
}

// 测试自定义数据类型
class Person
{
public:
    Person() {};
    Person(string name, int age)
    {
        this->m_age = age;
        this->m_name = name;
    }
    string m_name;
    int m_age;
};

void printPersonArray(MyArray<Person>& arr)
{
    for (size_t i = 0; i < arr.getSize(); i++)
    {
        cout << "姓名：" << arr[i].m_name << "\t年龄：" << arr[i].m_age << endl;
    }
}
void test02()
{
    MyArray<Person> arr(10);
    Person p1("孙悟空", 1000);
    Person p2("韩信", 20);
    Person p3("妲己", 19);
    Person p4("程咬金", 35);
    Person p5("赵云", 25);

    // 将数据插入到数组中
    arr.Push_Back(p1);
    arr.Push_Back(p2);
    arr.Push_Back(p3);
    arr.Push_Back(p4);
    arr.Push_Back(p5);

    // 打印数组
    printPersonArray(arr);
    cout << "PersonArray的容量为：" << arr.getCapacity() << endl;
    cout << "PersonArray的大小为：" << arr.getSize() << endl;
}

int main()
{

    test01();
    test02();
    system("pause");
    return 0;
}