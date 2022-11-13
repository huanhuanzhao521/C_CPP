// 指针的使用
#include <iostream>
#include <string>
using namespace std;
/*
// 实现两个数字的交换
void swap01(int a, int b) {
	int temp = a;
	a = b;
	b = temp;

	cout << "形参a = " << a << endl;
	cout << "形参b =" << b << endl;

}

void swap02(int* p1, int* p2) {
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;

	cout << "地址传递*p1 = " << *p1 << endl;
	cout << "地址传递*p2 =" << *p2 << endl;
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
	swap02(&a, &b);
	cout << "地址传递a = " << a << endl;
	cout << "地址传递b =" << b << endl;

	system("pause");
	return 0;
}
*/

/*
// 冒泡排序函数
// 参数1：数组首地址，参数2：数组长度
void bubble(int *arr,int len)
{
	for (int i = 0; i < len - 1; i++) {
		for (int j = 0; j < len - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

// 打印数组
void print(int *arr, int len) {
	for (int i = 0; i < len; i++) {
		cout << arr[i] << endl;
	}
}

int main()
{

	// 1、先创建数组
	int arr[10] = { 4,3,6,9,1,2,10,8,7,5 };

	// 2、创建函数，实现冒泡排序
	int len = sizeof(arr) / sizeof(arr[0]);
	bubble(arr,len);
	// 3、打印排序后的数组
	print(arr,len);

	system("pause");
	return 0;
}
*/

/*
// 1、创建学生数据类型
struct student {
	string name;
	int age;
	double score;
} s3; // 创建结构体的时候顺便创建结构体变量


// 2、通过学生类型创建具体学生
// 2.1 struct student s1;
// 2.2 struct student s2 = {};
// 2.3 在定义结构体时顺便创建结构体变量



int main()
{
	// 2.1 struct student s1;  struct 关键字可以省略
	struct student s1;
	s1.name = "张三";
	s1.age = 18;
	s1.score = 100;

	cout << "姓名：" << s1.name << "  年龄：" << s1.age << "  分数：" << s1.score << endl;
    // 2.2 struct student s2 = {};
	struct student s2 = { "李四",19,80 };
	cout << "姓名：" << s2.name << "  年龄：" << s2.age << "  分数：" << s2.score << endl;
	
    // 2.3 在定义结构体时顺便创建结构体变量
	s3.name = "王五";
	s3.age = 20;
	s3.score = 60;

	cout << "姓名：" << s3.name << "  年龄：" << s3.age << "  分数：" << s3.score << endl;

	system("pause");
	return 0;
}
*/

/*
// 结构体数组

// 1、定义结构体
struct student {
	string name;
	int age;
	double score;
};

int main()
{
	// 2、创建结构体数组
	struct student stuArray[3] = {
		{"张三",18,100},
		{"李四",28,99},
		{"王五",38,66}
	};


    // 3、给结构体数组中的元素赋值
	stuArray[2].name = "赵六";
	stuArray[2].age = 80;
	stuArray[2].score = 60;
    // 4、遍历结构体数组
	for (int i = 0; i < 3; i++) {
		cout << "姓名：" << stuArray[i].name
			 << "  年龄：" << stuArray[i].age
			 << "  分数： " << stuArray[i].score << endl;
	}


	system("pause");
	return 0;
}
*/

/*
// 结构体指针
struct Student {
	string name;
	int age;
	int score;
};

int main()
{
	// 1、创建结构体变量
	struct Student s = { "张三",18,100 };

	// 2、通过指针指向结构体中的变量
	Student * p = &s;


	// 3、通过指针访问结构体中的变量数据；
	cout << "姓名：" << p->name << " 年龄：" << p->age << " 分数：" << p->score << endl;

	system("pause");
	return 0;
}
*/

/*
// 结构体中嵌套结构体
struct student {
	string name;
	int age;
	int score;
};

struct Teacher {
	int id;
	string name;
	int age;
	struct student stu;
};
int main()
{
	// 创建老师结构体
	Teacher t;
	t.id = 10000;
	t.age = 50;
	t.name = "老王";
	t.stu.age = 20;
	t.stu.score = 60;
	t.stu.name = "小王";

	cout << "老师姓名：" << t.name << " 老师编号：" << t.id << " 老师年龄：" << t.age
		<< " 老师辅导学生的姓名：" << t.stu.name << " 老师辅导学生年龄:" << t.stu.age
		<< " 老师辅导学生分数：" << t.stu.score << endl;

	system("pause");
	return 0;
}
*/

/*

// 结构体做函数的参数

// 定义学生结构体
struct Student {
	int age;
	int score;
	string name;
};

// 1、值传递
void printStudent(struct Student s)
{
	s.age = 100;
	std::cout << "值传递 学生姓名：" << s.name << "  学生年龄:" << s.age << "  学生分数:" << s.score << std::endl;
}

// 2、地址传递
void print2Student(struct Student *s) {
	s->age = 200;
	std::cout << "地址传递 学生姓名：" << s->name << "  学生年龄:" << s->age << "  学生分数:" << s->score << std::endl;
};
int main()
{
	// 结构体做函数的参数
	// 将学生传入到一个参数中，打印学生身上的所有信息

	// 创建结构体变量
	struct Student stu;
	stu.name = "张三";
	stu.age = 20;
	stu.score = 85;

	// 通过函数打印学生信息
	// printStudent(stu);
	print2Student(&stu);

	// main函数中打印的结果
	std::cout << "main函数 学生姓名：" << stu.name << "  学生年龄:" << stu.age << "  学生分数:" << stu.score << std::endl;
	
	system("pause");
	return 0;
}
*/

// const 的使用场景
struct student {
	int age;
	int score;
	string name;
};

// 将函数中的形参改为指针，可以减少内存空间，而且不会复制新的副本
void printStudent(const student *stu) {
	// stu->age = 150; // 加入const之后，一旦有修改操作就会报错，可以防止我们的误操作；
	std::cout << "const修饰 学生姓名：" << stu->name << "  学生年龄:" << stu->age << "  学生分数:" << stu->score << std::endl;
}
int main()
{
	// 创建结构体变量
	struct student s = { 15,70,"张三" };

	// 通过函数打印结构体的信息
	printStudent(&s);
	std::cout << "main函数 学生姓名：" << s.name << "  学生年龄:" << s.age << "  学生分数:" << s.score << std::endl;

	system("pause");
	return 0;
}