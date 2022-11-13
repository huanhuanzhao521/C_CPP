// 指针的使用
#include <iostream>

using namespace std;

// 实现两个数字的交换
void swap01(int a, int b) {
	int temp = a;
	a = b;
	b = temp;

	cout << "形参a = " << a << endl;
	cout << "形参b =" << b << endl;

}

void swap02(int*p1, int*p2){
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp; 
}
int main()
{
	// 指针和函数
    // 1、值传递
	int a = 10, b = 20;
	swap01(a, b);

	cout << "实参a = " << a << endl;
	cout << "实参b =" << b << endl;

	// 2、地址传递
    // 如果是地址传递，可以修饰实参
    swap02 (&a,&b);
    cout << "地址传递a = " << a << endl;
	cout << "地址传递b =" << b << endl;

	system("pause");
	return 0;
}