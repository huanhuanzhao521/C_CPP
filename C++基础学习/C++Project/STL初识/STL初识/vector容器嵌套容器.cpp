#include <iostream>
#include <vector>

using namespace std;

void test01()
{
    vector< vector<int> > vvt;
    // 创建小容器
    vector<int> v1;
    vector<int> v2;
    vector<int> v3;
    vector<int> v4;
    vector<int> v5;

    // 向小容器中添加数据
    for (size_t i = 0; i < 4; i++) {
        v1.push_back(i + 1);
        v2.push_back(i + 2);
        v3.push_back(i + 3);
        v4.push_back(i + 4);
        v5.push_back(i + 5);
    }

    // 将小容器插入到大容器中
    vvt.push_back(v1);
    vvt.push_back(v2);
    vvt.push_back(v3);
    vvt.push_back(v4);
    vvt.push_back(v5);

    // 通过大容器，把所有数据遍历一遍
    for (vector< vector<int> > ::iterator it = vvt.begin(); it != vvt.end(); it++) {
        // (*it) --- 容器vector<int>
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