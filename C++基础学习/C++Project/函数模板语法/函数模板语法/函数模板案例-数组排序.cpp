#include <iostream>

using namespace std;

// ʵ��ͨ�ã��������������ĺ���
// ���򣬴Ӵ�С
// �㷨��ѡ������
// ���� char ���飬int ����

// ʵ�ֽ�������ģ��
template <class T>
void mySwap(T& a, T& b)
{
    T tmp = a;
    a = b;
    b = tmp;
}
// �����㷨
template <typename T>
void mySort(T arr[], int len)
{
    for (size_t i = 0; i < len; i++) {
        size_t max = i;
        for (int j = i + 1; j < len; j++) {
            // �϶������ֵ �� ������������ ҪС��˵��j�±��Ԫ�ز������������ֵ
            if (arr[max] < arr[j]) {
                max = j;  // �������ֵ�±�
            }
        }
        if (max != i) {
            // ����max �� i�±��Ԫ��
            mySwap(arr[max], arr[i]);
        }
    }
}

// �ṩ��ӡ����ģ��
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
    // ����char ����
    char charArr[] = "badcfe";
    int length = sizeof(charArr) / sizeof(char);
    mySort(charArr, length);
    printArray(charArr, length);
}

void test02()
{
    // ����int��������
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