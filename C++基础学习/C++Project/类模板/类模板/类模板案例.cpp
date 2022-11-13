#include <iostream>
#include <string>
#include "myArray.hpp"

using namespace std;

/*
*  ����������ʵ��һ��ͨ�õ������࣬Ҫ�����£�
* ���Զ��������������Լ��Զ����������͵����ݽ��д洢
* �������е����ݴ洢������
* ���캯���п��Դ������������
* �ṩ��Ӧ�Ŀ������캯���Լ�operator=��ֹǳ��������
* �ṩβ�巨��βɾ���������е����ݽ������Ӻ�ɾ��
* ����ͨ���±�ķ�ʽ���������е�Ԫ��
* ���Ի�ȡ�����е�ǰԪ�ظ��������������
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
        // ����β�巨�������в�������
        arr1.Push_Back(i);
    }
    cout << "arr1�Ĵ�ӡ���Ϊ��" << endl;
    printArray(arr1);

    cout << "arr1������Ϊ��" << arr1.getCapacity() << endl;
    cout << "arr1�Ĵ�СΪ��" << arr1.getSize() << endl;

    MyArray <int>arr2(arr1);
    printArray(arr2);
    // βɾ��
    arr2.Pop_Back();
    cout << "arr2������Ϊ��" << arr2.getCapacity() << endl;
    cout << "arr2�Ĵ�СΪ��" << arr2.getSize() << endl;

    //MyArray <int> arr2(arr1);
    //MyArray <int> arr3(100);
    //arr3 = arr1;
}

// �����Զ�����������
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
        cout << "������" << arr[i].m_name << "\t���䣺" << arr[i].m_age << endl;
    }
}
void test02()
{
    MyArray<Person> arr(10);
    Person p1("�����", 1000);
    Person p2("����", 20);
    Person p3("槼�", 19);
    Person p4("��ҧ��", 35);
    Person p5("����", 25);

    // �����ݲ��뵽������
    arr.Push_Back(p1);
    arr.Push_Back(p2);
    arr.Push_Back(p3);
    arr.Push_Back(p4);
    arr.Push_Back(p5);

    // ��ӡ����
    printPersonArray(arr);
    cout << "PersonArray������Ϊ��" << arr.getCapacity() << endl;
    cout << "PersonArray�Ĵ�СΪ��" << arr.getSize() << endl;
}

int main()
{

    test01();
    test02();
    system("pause");
    return 0;
}