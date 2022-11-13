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
	// goto语句
	cout << "1、XXXX" << endl;
	cout << "2、XXXX" << endl;
	goto flag;
	cout << "3、XXXX" << endl;
	cout << "4、XXXX" << endl;
flag:
	cout << "5、XXXX" << endl;
	system("pause");
	return 0;
}
*/
/*
int main()
{
/*
	// 数组的学习
	int arr[5];
	// 给数组中的元素进行赋值
	arr[0] = 10;
	arr[1] = 20;
	arr[2] = 30;
	arr[3] = 40;
	arr[4] = 50;

	// 访问数组中的元素
	cout << arr[0] << endl;
	cout << "--------------" << endl;
	// 数组的定义方式2：
	int arr2[5] = { 10,20,30,40,50 };
	for (int i = 0; i < 5; i++) {
		cout << arr2[i] << endl;
	}
	cout << "--------------" << endl;

	// 数组的定义方式3：
	// 定义数组的时候，必须有初始长度
	int arr3[] = { 90,80,70,60,50,40 };
	for (int i = 0; i < 6; i++) {
		cout << arr3[i] << endl;
	}

*/
/*
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };

	// sizeof() 统计数据类型所占空间的大小
	cout << "整个数组所占的内存空间：" << sizeof(arr) << endl;
	cout << "每个元素所占的内存空间：" << sizeof(arr[0]) << endl; // 每个元素所占的内存空间
	cout << "数组中元素的个数：" << sizeof(arr) / sizeof(arr[0]) << endl;

	cout << "通过数组名查看数组的首地址：" << arr << endl;
	cout << "数组中第一个元素的地址：" << &arr[0] << endl;
	cout << "数组中第二个元素的地址：" << &arr[1] << endl;
*/
/*
	// 一维数组的案例：5只小猪
	int arrpig[] = { 300,350,200,400,250 };
	int max = 0;
	for (int i = 0; i < 5; i++) {
		if (arrpig[i] > max) {
			max = arrpig[i];
		}
		
	}
	cout << "最重的小猪体重为：" << max << endl;
*/
/*
	//  数组元素的逆置
	int arr[] = { 1,2,3,4,5 };
	for (int i = 4; i >= 0; i--) {
		cout << arr[i] << endl;
	}
	
	cout << "------------" << endl;
	int start = 0; // 起始下标
	int end = sizeof(arr) / sizeof(arr[0]) - 1;  // 结束下标

	while (start < end) {
		// 实现元素互换
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;

		// 下标更新
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

// 冒泡排序
/*
int main()
{
	int arr[] = { 4,2,8,0,5,7,1,3,9 };
	cout << "排序前：" << endl;
	for (int i = 0; i < 9; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;

	// 开始冒泡排序
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
	// 排序后的结果
	cout << "排序后：" << endl;
	for (int i = 0; i < 9; i++) {
		cout << arr[i] << " ";
	}

}
*/

// 二位数组
/*
int main()
{
/*
	// 二维数组名称的用途
	int arr[2][3] = {
		{1,2,3},
		{4,5,6}
	};

	cout << "二位数组所占用的内存空间的大小：" << sizeof(arr) << endl;
	cout << "二位数组第一行所占用的内存空间的大小：" << sizeof(arr[0]) << endl;
	cout << "二位数组第一个元素所占用的内存：" << sizeof(arr[0][0]) << endl;

	cout << "二维数组的行数：" << sizeof(arr) / sizeof(arr[0]) << endl;
	cout << "二维数组的列数：" << sizeof(arr[0]) / sizeof(arr[0][0]) << endl;

	cout << "二维数组的首地址：" << arr << endl;
	cout << "二维数组第一行的首地址：" << arr[0] << endl;
	cout << "二维数组的第二行的首地址：" << arr[1] << endl;

	cout << "二维数组第一个元素的首地址：" << &arr[0][0] << endl;
	cout << "二维数组第一个元素的首地址：" << &arr[0][1] << endl;
*/

	/// 二维数组案例-考试成绩的统计
/*
	// 1 、创建二维数组
	int scores[3][3] = {
		{100,100,100},
		{90,50,100},
		{60,70,80}
	};

	string names[] = {"张三","李四","王五"};

	for (int i = 0; i < 3; i++) {
		int sum = 0;
		for (int j = 0; j < 3; j++) {
			sum += scores[i][j];
			// cout << scores[i][j]<<" ";
		}
		cout << names[i] << "个人的总分为：" << sum << endl;
	}
*/
/*
	system("pause");
	return 0;
}
*/

// 1、无参无返
void test01()
{
	cout << "this is test01." << endl;
}
// 2、有参无返
void test02(int a) {
	cout << "this is test02 a = " << a << endl;
}
// 3、无参有返
int test03() {
	cout << "this is test03" << endl;
	return 1000;
}
// 4、有参有返
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