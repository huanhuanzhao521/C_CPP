#include <iostream>

using namespace std;

class Animal {
public:
    virtual void speak()
    {
        cout << "������˵��" << endl;
    }
};

class Cat :public Animal {
public:
    // ��д�������ķ���ֵ���ͣ��������������б� ��ȫ��ͬ
    void speak()
    {
        cout << "Сè��˵��" << endl;
    }
};

class Dog :public Animal {
public:
    void speak()
    {
        cout << "С����˵��" << endl;
    }
};
// ִ��˵���ĺ���
// ��ַ��󶨣��ڱ���׶�ȷ��������ַ
// �����ִ����è˵������ô��������ĵ�ַ�Ͳ�����ǰ�󶨣���Ҫ�����н׶ν��а󶨣���ַ���

// ��̬��̬����������
//     1���м̳й�ϵ
//     2��������д������麯����
// 
// 
// ��̬��̬��ʹ�ã�
//     1�������ָ������� ָ���������
// 
//     
void doSpeak(Animal &animal) // Animal &animal = cat;
{
    animal.speak();
}

void test01()
{
    Cat cat;
    doSpeak(cat);
    cout << "--------------------" << endl;
    Dog dog;
    doSpeak(dog);
}

void test02()
{
    cout << "sizeof Animal = " << sizeof(Animal) << endl;
}

int main()
{

    test01();
    test02();
    system("pause");
    return 0;
}