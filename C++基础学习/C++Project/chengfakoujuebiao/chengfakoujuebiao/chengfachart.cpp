#include <iostream>
#include <string>
using namespace std;
/*
int main()
{
	for (int i = 1; i <= 9; i++) {
		for (int j = 1; j <= i; j++) {
			cout << j << " * " << i << " = " << j * i << "  ";
		}
		cout << endl;
	}
	system("pause");
	return 0;
}
*/
/*
int main()
{
	// goto���
	cout << "1��XXXX" << endl;
	cout << "2��XXXX" << endl;
	goto flag;
	cout << "3��XXXX" << endl;
	cout << "4��XXXX" << endl;
flag:
	cout << "5��XXXX" << endl;
	system("pause");
	return 0;
}
*/
/*
int main()
{
/*
	// �����ѧϰ
	int arr[5];
	// �������е�Ԫ�ؽ��и�ֵ
	arr[0] = 10;
	arr[1] = 20;
	arr[2] = 30;
	arr[3] = 40;
	arr[4] = 50;

	// ���������е�Ԫ��
	cout << arr[0] << endl;
	cout << "--------------" << endl;
	// ����Ķ��巽ʽ2��
	int arr2[5] = { 10,20,30,40,50 };
	for (int i = 0; i < 5; i++) {
		cout << arr2[i] << endl;
	}
	cout << "--------------" << endl;

	// ����Ķ��巽ʽ3��
	// ���������ʱ�򣬱����г�ʼ����
	int arr3[] = { 90,80,70,60,50,40 };
	for (int i = 0; i < 6; i++) {
		cout << arr3[i] << endl;
	}

*/
/*
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };

	// sizeof() ͳ������������ռ�ռ�Ĵ�С
	cout << "����������ռ���ڴ�ռ䣺" << sizeof(arr) << endl;
	cout << "ÿ��Ԫ����ռ���ڴ�ռ䣺" << sizeof(arr[0]) << endl; // ÿ��Ԫ����ռ���ڴ�ռ�
	cout << "������Ԫ�صĸ�����" << sizeof(arr) / sizeof(arr[0]) << endl;

	cout << "ͨ���������鿴������׵�ַ��" << arr << endl;
	cout << "�����е�һ��Ԫ�صĵ�ַ��" << &arr[0] << endl;
	cout << "�����еڶ���Ԫ�صĵ�ַ��" << &arr[1] << endl;
*/
/*
	// һά����İ�����5ֻС��
	int arrpig[] = { 300,350,200,400,250 };
	int max = 0;
	for (int i = 0; i < 5; i++) {
		if (arrpig[i] > max) {
			max = arrpig[i];
		}
		
	}
	cout << "���ص�С������Ϊ��" << max << endl;
*/
/*
	//  ����Ԫ�ص�����
	int arr[] = { 1,2,3,4,5 };
	for (int i = 4; i >= 0; i--) {
		cout << arr[i] << endl;
	}
	
	cout << "------------" << endl;
	int start = 0; // ��ʼ�±�
	int end = sizeof(arr) / sizeof(arr[0]) - 1;  // �����±�

	while (start < end) {
		// ʵ��Ԫ�ػ���
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;

		// �±����
		start++;
		end--;
	}
	
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
		cout << arr[i] << endl;
	}
	system("pause");
	return 0;
*/
/*
}
*/

// ð������
/*
int main()
{
	int arr[] = { 4,2,8,0,5,7,1,3,9 };
	cout << "����ǰ��" << endl;
	for (int i = 0; i < 9; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;

	// ��ʼð������
	int length = sizeof(arr) / sizeof(int) - 1;
	for (int i = 0; i < length; i++) {
		for (int j = 0; j < length - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	// �����Ľ��
	cout << "�����" << endl;
	for (int i = 0; i < 9; i++) {
		cout << arr[i] << " ";
	}

}
*/

// ��λ����
/*
int main()
{
/*
	// ��ά�������Ƶ���;
	int arr[2][3] = {
		{1,2,3},
		{4,5,6}
	};

	cout << "��λ������ռ�õ��ڴ�ռ�Ĵ�С��" << sizeof(arr) << endl;
	cout << "��λ�����һ����ռ�õ��ڴ�ռ�Ĵ�С��" << sizeof(arr[0]) << endl;
	cout << "��λ�����һ��Ԫ����ռ�õ��ڴ棺" << sizeof(arr[0][0]) << endl;

	cout << "��ά�����������" << sizeof(arr) / sizeof(arr[0]) << endl;
	cout << "��ά�����������" << sizeof(arr[0]) / sizeof(arr[0][0]) << endl;

	cout << "��ά������׵�ַ��" << arr << endl;
	cout << "��ά�����һ�е��׵�ַ��" << arr[0] << endl;
	cout << "��ά����ĵڶ��е��׵�ַ��" << arr[1] << endl;

	cout << "��ά�����һ��Ԫ�ص��׵�ַ��" << &arr[0][0] << endl;
	cout << "��ά�����һ��Ԫ�ص��׵�ַ��" << &arr[0][1] << endl;
*/

	/// ��ά���鰸��-���Գɼ���ͳ��
/*
	// 1 ��������ά����
	int scores[3][3] = {
		{100,100,100},
		{90,50,100},
		{60,70,80}
	};

	string names[] = {"����","����","����"};

	for (int i = 0; i < 3; i++) {
		int sum = 0;
		for (int j = 0; j < 3; j++) {
			sum += scores[i][j];
			// cout << scores[i][j]<<" ";
		}
		cout << names[i] << "���˵��ܷ�Ϊ��" << sum << endl;
	}
*/
/*
	system("pause");
	return 0;
}
*/

// 1���޲��޷�
void test01()
{
	cout << "this is test01." << endl;
}
// 2���в��޷�
void test02(int a) {
	cout << "this is test02 a = " << a << endl;
}
// 3���޲��з�
int test03() {
	cout << "this is test03" << endl;
	return 1000;
}
// 4���в��з�
int test04(int b) {
	cout << "this is test04 b =  " << b << endl;
	return b;
}

int main()
{
	test01();

	test02(100);

	int num1 = test03();
	cout << "num1 = " << num1 << endl;

	int num2 = test04(10000);
	cout << "num2 = " << num2 << endl;

	system("pause");
	return 0;

}