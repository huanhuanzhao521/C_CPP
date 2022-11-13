#include <iostream>
#include <string>

using namespace std;

// �������
class CPU {
public:
    virtual void caculate() = 0;
};

class VideoCard {
public:
    virtual void display() = 0;
};

class Memory {
public:
    virtual void storage() = 0;
};

// ������
class Computer {
public:
    Computer(CPU* m_cpu, VideoCard* m_vcd, Memory* m_mem) {
        cpu = m_cpu;
        vcd = m_vcd;
        mem = m_mem;
    }

    // �ṩ�����ĺ���
    void dowork()
    {
        cpu->caculate();
        vcd->display();
        mem->storage();
        
    }
    // �ṩ�������� �ͷ�3���������
    ~Computer()
    {
        if (cpu != nullptr) {
            delete cpu;
            cpu = nullptr;
        }
        if (vcd != nullptr) {
            delete vcd;
            vcd = nullptr;
        }
        if (mem != nullptr) {
            delete mem;
            mem = nullptr;
        }
    }
private:
    CPU* cpu;
    VideoCard* vcd;
    Memory* mem;
};

// Intel����
class IntelCPU : public CPU {
public:
    virtual void caculate() {
        cout << "Intel ��CPU��ʼ������!" << endl;
    }
};

class IntelVideoCard: public VideoCard {
public:
    virtual void display() {
        cout << "Intel ���Կ���ʼ��ʾ��!" << endl;
    }
};

class IntelMeory : public Memory {
public:
    virtual void storage() {
        cout << "Intel ���ڴ�����ʼ�洢��!" << endl;
    }
};

// Lenovo����
class LenovoCPU : public CPU {
public:
    virtual void caculate() {
        cout << "Lenovo ��CPU��ʼ������!" << endl;
    }
};

class LenovoVideoCard : public VideoCard {
public:
    virtual void display() {
        cout << "Lenovo ���Կ���ʼ��ʾ��!" << endl;
    }
};

class LenovoMeory : public Memory {
public:
    virtual void storage() {
        cout << "Lenovo ���ڴ�����ʼ�洢��!" << endl;
    }
};

void test01()
{
    // ��װһ̨����
    cout << "-----��һ̨���Կ�ʼ����-----" << endl;
    CPU* intelCpu = new IntelCPU;
    VideoCard* intelvicard = new IntelVideoCard;
    Memory* intelmem = new IntelMeory;

    // ����һ̨����
    Computer* comp1 = new Computer(intelCpu, intelvicard, intelmem);
    comp1->dowork();

    delete comp1;

    cout << "-----�ڶ�̨���Կ�ʼ����-----" << endl;
    // ����һ̨����
    Computer* comp2 = new Computer(new LenovoCPU, new LenovoVideoCard, new LenovoMeory);
    comp2->dowork();
    delete comp2;

    cout << "-----����̨���Կ�ʼ����-----" << endl;
    // ����һ̨����
    Computer* comp3 = new Computer(new LenovoCPU, new IntelVideoCard, new LenovoMeory);
    comp3->dowork();
    delete comp3;

}

int main()
{

    test01();
    system("pause");
    return 0;
}