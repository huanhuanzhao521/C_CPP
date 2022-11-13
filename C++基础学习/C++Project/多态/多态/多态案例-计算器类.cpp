#include <iostream>
#include <string>
using namespace std;

// ��ͨд��
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
        // �������չ�µĹ��ܣ������޸�Դ��
        // ����ʵ�Ŀ����У��ᳫ ����ԭ��
        // ����ԭ�򣺶���չ���п��������޸Ľ��йر�
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

// ���ö�̬ʵ�ּ�����
// ʵ�ּ�����������
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
    // ��̬ʹ����
    // ����ָ���������ָ���������
    AbstractCalculator* abc = new AddCalculator;
    abc->m_num1 = 100;
    abc->m_num2 = 100;
    cout << abc->m_num1 << " + " << abc->m_num1 << " = " << abc->getResult() << endl;
    // ����ǵ�����
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