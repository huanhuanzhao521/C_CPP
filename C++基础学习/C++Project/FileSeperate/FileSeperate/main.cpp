#include <iostream>
#include "swap.h"

using namespace std;

int main()
{
	int a = 10;
	int b = 20;
	swap(a, b);

	// 1、定义指针
	int* p;

	// 让指针记录变量a的地址
	p = &a;
	cout << "a 的地址为：" << &a << endl;
	cout << "p       为：" << p << endl;
	// 2、使用指针,可以通过解引用的方式来找到指针指向的内存
	*p = 1000;
	cout << " a = " << a << endl;
	cout << " *p = " << *p << endl;


	// 指针所占的内存空间

	// 在32位操作系统下，指针是占 4 个字节空间的大小，不管是什么数据类型
	// 在64位操作系统下，指针是占 8 个字节空间的大小
	cout << "sizeof(int*) = " << sizeof(p) << endl;
	cout << "sizeof(int*) = " << sizeof(int*) << endl;
	cout << "sizeof(float*) = " << sizeof(float*) << endl;
	cout << "sizeof(double*) = " << sizeof(double*) << endl;
	cout << "sizeof(char*) = " << sizeof(char*) << endl;

	// 空指针
	int* q = nullptr;
	// 空指针是不可以访问的，0~255的内存编号是系统占用的，因此不可以访问；
	// *p = 100;  // error


	// 1、const修饰指针------ - 常量指针
    // 2、const修饰常量------ - 指针常量
    // 3、const即修饰指针，又修饰常量
	// 指针和数组：利用指针访问数组中的元素
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	cout << "第一个元素为：" << arr[0] << endl;

	int* m = arr; // arr就是数组首地址
	cout << "利用指针访问数组的第一个元素为：" << *m << endl;

	m++; // 让指针向后偏移 四个字节
	cout << "利用指针访问数组的第二个元素为：" << *m << endl;

	cout << "利用指针遍历数组：" << endl;
	int* m1 = arr;
	for (int i = 0; i < 10; i++) {
		cout << *m1 << endl;
		m1++;
	}

	system("pause");
	return 0;
}