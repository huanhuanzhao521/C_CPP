#include <iostream>
#include <string>

using namespace std;

// 零件抽象
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

// 电脑类
class Computer {
public:
    Computer(CPU* m_cpu, VideoCard* m_vcd, Memory* m_mem) {
        cpu = m_cpu;
        vcd = m_vcd;
        mem = m_mem;
    }

    // 提供工作的函数
    void dowork()
    {
        cpu->caculate();
        vcd->display();
        mem->storage();
        
    }
    // 提供析构函数 释放3个电脑零件
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

// Intel厂商
class IntelCPU : public CPU {
public:
    virtual void caculate() {
        cout << "Intel 的CPU开始计算了!" << endl;
    }
};

class IntelVideoCard: public VideoCard {
public:
    virtual void display() {
        cout << "Intel 的显卡开始显示了!" << endl;
    }
};

class IntelMeory : public Memory {
public:
    virtual void storage() {
        cout << "Intel 的内存条开始存储了!" << endl;
    }
};

// Lenovo厂商
class LenovoCPU : public CPU {
public:
    virtual void caculate() {
        cout << "Lenovo 的CPU开始计算了!" << endl;
    }
};

class LenovoVideoCard : public VideoCard {
public:
    virtual void display() {
        cout << "Lenovo 的显卡开始显示了!" << endl;
    }
};

class LenovoMeory : public Memory {
public:
    virtual void storage() {
        cout << "Lenovo 的内存条开始存储了!" << endl;
    }
};

void test01()
{
    // 组装一台电脑
    cout << "-----第一台电脑开始工作-----" << endl;
    CPU* intelCpu = new IntelCPU;
    VideoCard* intelvicard = new IntelVideoCard;
    Memory* intelmem = new IntelMeory;

    // 创建一台电脑
    Computer* comp1 = new Computer(intelCpu, intelvicard, intelmem);
    comp1->dowork();

    delete comp1;

    cout << "-----第二台电脑开始工作-----" << endl;
    // 创建一台电脑
    Computer* comp2 = new Computer(new LenovoCPU, new LenovoVideoCard, new LenovoMeory);
    comp2->dowork();
    delete comp2;

    cout << "-----第三台电脑开始工作-----" << endl;
    // 创建一台电脑
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