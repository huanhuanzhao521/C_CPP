#include <iostream>

using namespace std;

// 实现通用，对数组进行排序的函数
// 规则，从大到小
// 算法：选择排序
// 测试 char 数组，int 数组

// 实现交换函数模板
template <class T>
void mySwap(T& a, T& b)
{
    T tmp = a;
    a = b;
    b = tmp;
}
// 排序算法
template <typename T>
void mySort(T arr[], int len)
{
    for (size_t i = 0; i < len; i++) {
        size_t max = i;
        for (int j = i + 1; j < len; j++) {
            // 认定的最大值 比 遍历出的数组 要小，说明j下标的元素才是真正的最大值
            if (arr[max] < arr[j]) {
                max = j;  // 更新最大值下标
            }
        }
        if (max != i) {
            // 交换max 和 i下标的元素
            mySwap(arr[max], arr[i]);
        }
    }
}

// 提供打印数组模板
template <typename T>
void printArray(T arr[],int len)
{
    for (size_t i = 0; i < len; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void test01()
{
    // 测试char 数组
    char charArr[] = "badcfe";
    int length = sizeof(charArr) / sizeof(char);
    mySort(charArr, length);
    printArray(charArr, length);
}

void test02()
{
    // 测试int类型数组
    int intArr[] = { 7,5,1,3,4,9,0,8,6, 2 };
    int length = sizeof(intArr) / sizeof(int);
    mySort(intArr, length);
    printArray(intArr, length);
}

int main()
{

    test01();
    test02();
    system("pause");
    return 0;
}