#include <iostream>
#include <vector>

using namespace std;

void printVector(vector<int>& v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
}
void test01()
{
	vector<int> v1;
	for (size_t i = 0; i < 10; i++) {
		v1.push_back(i);
	}
	printVector(v1);

	if (v1.empty()) {
		cout << "v1为空" << endl;
	}
	cout << "v1不为空" << endl;
	cout << "v1的容量：" << v1.capacity() << endl;
	cout << "v1的大小：" << v1.size() << endl;

	// 重新指定大小
	v1.resize(15, 100); // 如果重新指定的比原来的长了，默认用0填充新的位置；
	                    // 利用重载版本，可以指定默认填充值，参数 2；
	printVector(v1);

	v1.resize(5); // 如果重新指定的比原来的短了，超出的部分会删除掉；
	printVector(v1);
}

int main()
{
	test01();
	system("pause");
	return 0;
}