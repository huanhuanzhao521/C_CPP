#include <iostream>
#include <string>

using namespace std;

class AbstractDrink {
public:
    // ��ˮ
    virtual void Boil() = 0;
    // ����
    virtual void Brew() = 0;
    // ���뱭��
    virtual void PourInCup() = 0;
    // ���븨��
    virtual void PutSomething() = 0;

    // ������Ʒ
    void makeDrink()
    {
        Boil();
        Brew();
        PourInCup();
        PutSomething();
    }
};

class Coffee : public AbstractDrink {
public:
    // ��ˮ
    virtual void Boil() {
        cout << "��ũ��ɽȪˮ" << endl;
    }
    // ����
    virtual void Brew() {
        cout << "���ݿ���" << endl;
    }
    // ���뱭��
    virtual void PourInCup() {
        cout << "������˱���" << endl;
    }
    // ���븨��
    virtual void PutSomething() {
        cout << "�����Ǻ�ţ��" << endl;
    }
};

class Tea : public AbstractDrink {
public:
    // ��ˮ
    virtual void Boil() {
        cout << "���Ȫˮ" << endl;
    }
    // ����
    virtual void Brew() {
        cout << "���ݲ�Ҷ" << endl;
    }
    // ���뱭��
    virtual void PourInCup() {
        cout << "�����Ǳ���" << endl;
    }
    // ���븨��
    virtual void PutSomething() {
        cout << "�������" << endl;
    }
};

void dowork(AbstractDrink* drink)
{
    drink->makeDrink();
    delete drink;
}

void test01()
{
    // ��������
    dowork(new Coffee);

    cout << "-----------------" << endl;
    // ������
    dowork(new Tea);
}

int main()
{

    test01();
    system("pause");
    return 0;
}