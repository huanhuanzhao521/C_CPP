// ָ���ʹ��
#include <iostream>
#include <string>
using namespace std;
/*
// ʵ���������ֵĽ���
void swap01(int a, int b) {
	int temp = a;
	a = b;
	b = temp;

	cout << "�β�a = " << a << endl;
	cout << "�β�b =" << b << endl;

}

void swap02(int* p1, int* p2) {
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;

	cout << "��ַ����*p1 = " << *p1 << endl;
	cout << "��ַ����*p2 =" << *p2 << endl;
}

int main()
{
	// ָ��ͺ���
    // 1��ֵ����
	int a = 10, b = 20;
	swap01(a, b);

	cout << "ʵ��a = " << a << endl;
	cout << "ʵ��b =" << b << endl;

	// 2����ַ����
	// ����ǵ�ַ���ݣ���������ʵ��
	swap02(&a, &b);
	cout << "��ַ����a = " << a << endl;
	cout << "��ַ����b =" << b << endl;

	system("pause");
	return 0;
}
*/

/*
// ð��������
// ����1�������׵�ַ������2�����鳤��
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

// ��ӡ����
void print(int *arr, int len) {
	for (int i = 0; i < len; i++) {
		cout << arr[i] << endl;
	}
}

int main()
{

	// 1���ȴ�������
	int arr[10] = { 4,3,6,9,1,2,10,8,7,5 };

	// 2������������ʵ��ð������
	int len = sizeof(arr) / sizeof(arr[0]);
	bubble(arr,len);
	// 3����ӡ����������
	print(arr,len);

	system("pause");
	return 0;
}
*/

/*
// 1������ѧ����������
struct student {
	string name;
	int age;
	double score;
} s3; // �����ṹ���ʱ��˳�㴴���ṹ�����


// 2��ͨ��ѧ�����ʹ�������ѧ��
// 2.1 struct student s1;
// 2.2 struct student s2 = {};
// 2.3 �ڶ���ṹ��ʱ˳�㴴���ṹ�����



int main()
{
	// 2.1 struct student s1;  struct �ؼ��ֿ���ʡ��
	struct student s1;
	s1.name = "����";
	s1.age = 18;
	s1.score = 100;

	cout << "������" << s1.name << "  ���䣺" << s1.age << "  ������" << s1.score << endl;
    // 2.2 struct student s2 = {};
	struct student s2 = { "����",19,80 };
	cout << "������" << s2.name << "  ���䣺" << s2.age << "  ������" << s2.score << endl;
	
    // 2.3 �ڶ���ṹ��ʱ˳�㴴���ṹ�����
	s3.name = "����";
	s3.age = 20;
	s3.score = 60;

	cout << "������" << s3.name << "  ���䣺" << s3.age << "  ������" << s3.score << endl;

	system("pause");
	return 0;
}
*/

/*
// �ṹ������

// 1������ṹ��
struct student {
	string name;
	int age;
	double score;
};

int main()
{
	// 2�������ṹ������
	struct student stuArray[3] = {
		{"����",18,100},
		{"����",28,99},
		{"����",38,66}
	};


    // 3�����ṹ�������е�Ԫ�ظ�ֵ
	stuArray[2].name = "����";
	stuArray[2].age = 80;
	stuArray[2].score = 60;
    // 4�������ṹ������
	for (int i = 0; i < 3; i++) {
		cout << "������" << stuArray[i].name
			 << "  ���䣺" << stuArray[i].age
			 << "  ������ " << stuArray[i].score << endl;
	}


	system("pause");
	return 0;
}
*/

/*
// �ṹ��ָ��
struct Student {
	string name;
	int age;
	int score;
};

int main()
{
	// 1�������ṹ�����
	struct Student s = { "����",18,100 };

	// 2��ͨ��ָ��ָ��ṹ���еı���
	Student * p = &s;


	// 3��ͨ��ָ����ʽṹ���еı������ݣ�
	cout << "������" << p->name << " ���䣺" << p->age << " ������" << p->score << endl;

	system("pause");
	return 0;
}
*/

/*
// �ṹ����Ƕ�׽ṹ��
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
	// ������ʦ�ṹ��
	Teacher t;
	t.id = 10000;
	t.age = 50;
	t.name = "����";
	t.stu.age = 20;
	t.stu.score = 60;
	t.stu.name = "С��";

	cout << "��ʦ������" << t.name << " ��ʦ��ţ�" << t.id << " ��ʦ���䣺" << t.age
		<< " ��ʦ����ѧ����������" << t.stu.name << " ��ʦ����ѧ������:" << t.stu.age
		<< " ��ʦ����ѧ��������" << t.stu.score << endl;

	system("pause");
	return 0;
}
*/

/*

// �ṹ���������Ĳ���

// ����ѧ���ṹ��
struct Student {
	int age;
	int score;
	string name;
};

// 1��ֵ����
void printStudent(struct Student s)
{
	s.age = 100;
	std::cout << "ֵ���� ѧ��������" << s.name << "  ѧ������:" << s.age << "  ѧ������:" << s.score << std::endl;
}

// 2����ַ����
void print2Student(struct Student *s) {
	s->age = 200;
	std::cout << "��ַ���� ѧ��������" << s->name << "  ѧ������:" << s->age << "  ѧ������:" << s->score << std::endl;
};
int main()
{
	// �ṹ���������Ĳ���
	// ��ѧ�����뵽һ�������У���ӡѧ�����ϵ�������Ϣ

	// �����ṹ�����
	struct Student stu;
	stu.name = "����";
	stu.age = 20;
	stu.score = 85;

	// ͨ��������ӡѧ����Ϣ
	// printStudent(stu);
	print2Student(&stu);

	// main�����д�ӡ�Ľ��
	std::cout << "main���� ѧ��������" << stu.name << "  ѧ������:" << stu.age << "  ѧ������:" << stu.score << std::endl;
	
	system("pause");
	return 0;
}
*/

// const ��ʹ�ó���
struct student {
	int age;
	int score;
	string name;
};

// �������е��βθ�Ϊָ�룬���Լ����ڴ�ռ䣬���Ҳ��Ḵ���µĸ���
void printStudent(const student *stu) {
	// stu->age = 150; // ����const֮��һ�����޸Ĳ����ͻᱨ�����Է�ֹ���ǵ��������
	std::cout << "const���� ѧ��������" << stu->name << "  ѧ������:" << stu->age << "  ѧ������:" << stu->score << std::endl;
}
int main()
{
	// �����ṹ�����
	struct student s = { 15,70,"����" };

	// ͨ��������ӡ�ṹ�����Ϣ
	printStudent(&s);
	std::cout << "main���� ѧ��������" << s.name << "  ѧ������:" << s.age << "  ѧ������:" << s.score << std::endl;

	system("pause");
	return 0;
}