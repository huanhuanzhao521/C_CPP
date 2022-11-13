#include <iostream>
using namespace std;


// �����������
// 1��������������
// 2��������Ժ���Ϊ
// 3����ȡ���������������
// 4���ֱ�����ȫ�ֺ����ͳ�Ա�������ж������������Ƿ����

class Cube
{
public:
    // ���ó�
    void setL(int len)
    {
        m_len = len;
    }
    // ��ȡ��
    int getL()
    {
        return m_len;
    }

    // ���ÿ�
    void setW(int wei)
    {
        m_wei = wei;
    }
    // ��ȡ��
    int getW()
    {
        return m_wei;
    }

    // ���ø�
    void setH(int hei)
    {
        m_hei = hei;
    }
    // ��ȡ��
    int getH()
    {
        return m_hei;
    }

    // ��ȡ����������
    int calculateS()
    {
        return 2 * m_len * m_wei + 2 * m_wei * m_hei + 2 * m_len * m_hei;
    }
    // ��ȡ����������
    int calculateV()
    {
        return m_len * m_wei * m_hei;
    }

    // ���ó�Ա�����ж������������Ƿ����
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

// ����ȫ�ֺ����ж� �����������Ƿ����
bool isSame(Cube &c1,Cube &c2)
{
    if (c1.getL() == c2.getL() && c1.getW() == c2.getW() && c1.getH() == c2.getH()) {
        return true;
    }
    return false;

}
int main()
{
    // �������������
    Cube c1;
    c1.setL(10);
    c1.setW(10);
    c1.setH(10);

    cout << "�����������ǣ�" << c1.calculateS() << endl;
    cout << "�����������ǣ�" << c1.calculateV() << endl;

    Cube c2;
    c2.setL(10);
    c2.setW(10);
    c2.setH(10);

    // ȫ�ֺ���
    bool ret = isSame(c1, c2);
    if (!ret) {
        cout << "ȫ�ֺ���C1 �� C2 �ǲ���ȵ�" << endl;
    } else {
        cout << "ȫ�ֺ���C1 �� C2 ����ȵ�" << endl;
    }
    
    // ���ó�Ա�����ж�
    ret = c1.isSameClass(c2);
    if (!ret) {
        cout << "��Ա����C1 �� C2 �ǲ���ȵ�" << endl;
    }
    else {
        cout << "��Ա����C1 �� C2 ����ȵ�" << endl;
    }
    system("pause");
    return 0;
}