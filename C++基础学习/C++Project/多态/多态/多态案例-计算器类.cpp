#include <iostream>
#include <string>
using namespace std;

// 普通写法
class Calculator {
public:
    int getResult(string oper)
    {
        if (oper == "+") {
            return m_num1 + m_num2;
        } else if (oper == "-") {
            return m_num1 - m_num2;
        } else if (oper == "*") {
            return m_num1 * m_num2;
        } else {
            return m_num1 / m_num2;
        }
        // 如果想扩展新的功能，需求修改源码
        // 在真实的开发中，提倡 开闭原则
        // 开闭原则：对扩展进行开发，对修改进行关闭
    }

    int m_num1;
    int m_num2;
};

void test01()
{
    Calculator cal;
    cal.m_num1 = 10;
    cal.m_num2 = 10;

    cout << cal.m_num1 << " + " << cal.m_num2 << " = " << cal.getResult("+") << endl;
    cout << cal.m_num1 << " - " << cal.m_num2 << " = " << cal.getResult("-") << endl;
    cout << cal.m_num1 << " * " << cal.m_num2 << " = " << cal.getResult("*") << endl;
}

// 利用多态实现计算器
// 实现计算器抽象类
// 

class AbstractCalculator {
public:
    virtual int getResult()
    {
        return 0;
    }

    int m_num1;
    int m_num2;
};

class AddCalculator : public AbstractCalculator{
public:
    int getResult()
    {
        return m_num1 + m_num2;
    }
};


class SubCalculator : public AbstractCalculator {
public:
    int getResult()
    {
        return m_num1 - m_num2;
    }
};

class MulCalculator : public AbstractCalculator {
public:
    int getResult()
    {
        return m_num1 * m_num2;
    }
};

void test02()
{
    // 多态使用类
    // 父类指针或者引用指向子类对象
    AbstractCalculator* abc = new AddCalculator;
    abc->m_num1 = 100;
    abc->m_num2 = 100;
    cout << abc->m_num1 << " + " << abc->m_num1 << " = " << abc->getResult() << endl;
    // 用完记得销毁
    delete abc;

    abc = new SubCalculator;
    abc->m_num1 = 100;
    abc->m_num2 = 100;
    cout << abc->m_num1 << " - " << abc->m_num1 << " = " << abc->getResult() << endl;

}
int main()
{
    // test01();
    test02();

    system("pause");
    return 0;
}