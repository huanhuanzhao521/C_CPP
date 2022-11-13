#include <iostream>
#include "swap.h"

using namespace std;

int main()
{
	int a = 10;
	int b = 20;
	swap(a, b);

	// 1������ָ��
	int* p;

	// ��ָ���¼����a�ĵ�ַ
	p = &a;
	cout << "a �ĵ�ַΪ��" << &a << endl;
	cout << "p       Ϊ��" << p << endl;
	// 2��ʹ��ָ��,����ͨ�������õķ�ʽ���ҵ�ָ��ָ����ڴ�
	*p = 1000;
	cout << " a = " << a << endl;
	cout << " *p = " << *p << endl;


	// ָ����ռ���ڴ�ռ�

	// ��32λ����ϵͳ�£�ָ����ռ 4 ���ֽڿռ�Ĵ�С��������ʲô��������
	// ��64λ����ϵͳ�£�ָ����ռ 8 ���ֽڿռ�Ĵ�С
	cout << "sizeof(int*) = " << sizeof(p) << endl;
	cout << "sizeof(int*) = " << sizeof(int*) << endl;
	cout << "sizeof(float*) = " << sizeof(float*) << endl;
	cout << "sizeof(double*) = " << sizeof(double*) << endl;
	cout << "sizeof(char*) = " << sizeof(char*) << endl;

	// ��ָ��
	int* q = nullptr;
	// ��ָ���ǲ����Է��ʵģ�0~255���ڴ�����ϵͳռ�õģ���˲����Է��ʣ�
	// *p = 100;  // error


	// 1��const����ָ��------ - ����ָ��
    // 2��const���γ���------ - ָ�볣��
    // 3��const������ָ�룬�����γ���
	// ָ������飺����ָ����������е�Ԫ��
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	cout << "��һ��Ԫ��Ϊ��" << arr[0] << endl;

	int* m = arr; // arr���������׵�ַ
	cout << "����ָ���������ĵ�һ��Ԫ��Ϊ��" << *m << endl;

	m++; // ��ָ�����ƫ�� �ĸ��ֽ�
	cout << "����ָ���������ĵڶ���Ԫ��Ϊ��" << *m << endl;

	cout << "����ָ��������飺" << endl;
	int* m1 = arr;
	for (int i = 0; i < 10; i++) {
		cout << *m1 << endl;
		m1++;
	}

	system("pause");
	return 0;
}