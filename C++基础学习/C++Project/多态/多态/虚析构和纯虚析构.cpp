#include <iostream>
#include <string>
using namespace std;

class Animal {
public:
    Animal() {
        cout << "Animal �Ĺ��캯������" << endl;
    }
    // �������������Խ�� ����ָ���ͷ��������ʱ���ɾ�������
    //virtual ~Animal() {
    //    cout << "Animal ����������������" << endl;
    //}
    // �������� ��Ҫ������Ҳ��Ҫ��ʵ��
    // ���˴�������֮�������Ҳ���ڳ����࣬�޷�ʵ������
    virtual ~Animal() = 0;
    virtual void speak() = 0;
};

 Animal::~Animal() 
{
     cout << "Animal �Ĵ���������������" << endl;
}
class Cat : public Animal {
public:
    Cat(string name) {
        cout << "Cat �Ĺ��캯������" << endl;
        m_name = new string(name);
    }
    ~Cat()
    {
        if (m_name != nullptr) {
            cout << "Cat ��������������" << endl;
            delete m_name;
            m_name = nullptr;
        }
    }
    virtual void speak() {
        cout << *m_name <<" Сè��˵��" << endl;
    }

    string* m_name;
};


void test01()
{
    Animal* ani = new Cat("Tom");
    ani->speak();
    // �����ָ����������ʱ�򣬲����������������������
    // ������������ж������ԣ������ڴ�й¶��
    delete ani;
}
int main()
{

    test01();
    system("pause");
    return 0;
}
