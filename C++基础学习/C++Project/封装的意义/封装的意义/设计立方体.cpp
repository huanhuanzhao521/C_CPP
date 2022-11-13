#include <iostream>
using namespace std;


// 设计立方体类
// 1、创建立方体类
// 2、设计属性和行为
// 3、获取立方体的面积和体积
// 4、分别利用全局函数和成员函数，判断两个立方体是否相等

class Cube
{
public:
    // 设置长
    void setL(int len)
    {
        m_len = len;
    }
    // 获取长
    int getL()
    {
        return m_len;
    }

    // 设置宽
    void setW(int wei)
    {
        m_wei = wei;
    }
    // 获取宽
    int getW()
    {
        return m_wei;
    }

    // 设置高
    void setH(int hei)
    {
        m_hei = hei;
    }
    // 获取高
    int getH()
    {
        return m_hei;
    }

    // 获取立方体的面积
    int calculateS()
    {
        return 2 * m_len * m_wei + 2 * m_wei * m_hei + 2 * m_len * m_hei;
    }
    // 获取立方体的体积
    int calculateV()
    {
        return m_len * m_wei * m_hei;
    }

    // 利用成员函数判断两个立方体是否相等
    bool isSameClass(Cube &c)
    {
        if (m_len == c.getL() && m_wei == c.getW() && m_hei == c.getH()) {
            return true;
        }
        return false;
    }
private:
    int m_len;
    int m_wei;
    int m_hei;
};

// 利用全局函数判断 两个立方体是否相等
bool isSame(Cube &c1,Cube &c2)
{
    if (c1.getL() == c2.getL() && c1.getW() == c2.getW() && c1.getH() == c2.getH()) {
        return true;
    }
    return false;

}
int main()
{
    // 创建立方体对象
    Cube c1;
    c1.setL(10);
    c1.setW(10);
    c1.setH(10);

    cout << "立方体的面积是：" << c1.calculateS() << endl;
    cout << "立方体的体积是：" << c1.calculateV() << endl;

    Cube c2;
    c2.setL(10);
    c2.setW(10);
    c2.setH(10);

    // 全局函数
    bool ret = isSame(c1, c2);
    if (!ret) {
        cout << "全局函数C1 和 C2 是不相等的" << endl;
    } else {
        cout << "全局函数C1 和 C2 是相等的" << endl;
    }
    
    // 利用成员函数判断
    ret = c1.isSameClass(c2);
    if (!ret) {
        cout << "成员函数C1 和 C2 是不相等的" << endl;
    }
    else {
        cout << "成员函数C1 和 C2 是相等的" << endl;
    }
    system("pause");
    return 0;
}