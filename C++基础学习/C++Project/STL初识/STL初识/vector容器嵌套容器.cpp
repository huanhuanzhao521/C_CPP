#include <iostream>
#include <vector>

using namespace std;

void test01()
{
    vector< vector<int> > vvt;
    // ����С����
    vector<int> v1;
    vector<int> v2;
    vector<int> v3;
    vector<int> v4;
    vector<int> v5;

    // ��С�������������
    for (size_t i = 0; i < 4; i++) {
        v1.push_back(i + 1);
        v2.push_back(i + 2);
        v3.push_back(i + 3);
        v4.push_back(i + 4);
        v5.push_back(i + 5);
    }

    // ��С�������뵽��������
    vvt.push_back(v1);
    vvt.push_back(v2);
    vvt.push_back(v3);
    vvt.push_back(v4);
    vvt.push_back(v5);

    // ͨ�������������������ݱ���һ��
    for (vector< vector<int> > ::iterator it = vvt.begin(); it != vvt.end(); it++) {
        // (*it) --- ����vector<int>
        for (vector<int>::iterator vit = (*it).begin(); vit != (*it).end(); vit++) {
            cout << *vit << " ";
        }
        cout << endl;
    }
}

int main()
{

    test01();
    system("pause");
    return 0;
}