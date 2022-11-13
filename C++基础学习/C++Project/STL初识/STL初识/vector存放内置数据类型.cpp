#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void myPrint(int val)
{
    cout << val << " ";
}

void test01()
{
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);

    // 通过迭代器访问容器中的数据
    //vector<int>::iterator itBegin = v.begin();  // 起始迭代器，指向容器中第一个元素
    //vector<int>::iterator itEnd = v.end(); // 结束迭代器，指向容器中最后一个元素的下一个位置
    //// 第一种方式
    //while (itBegin != itEnd) {
    //    cout << *itBegin << " ";
    //    itBegin++;
    //}
    //cout << endl;

    // 第二种方式
    /*for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;*/

    // 第三种方式
    for_each(v.begin(), v.end(), myPrint);
    cout << endl;
}

int main()
{

    test01();
    system("pause");
    return 0;
}