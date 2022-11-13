#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>

using namespace std;

void Print(int val)
{
	cout << val << " ";
}

void test01()
{
	srand((unsigned int)time(NULL));
	vector<int> v;
	for (size_t i = 0; i < 10; i++) {
		v.push_back(i);
	}

	random_shuffle(v.begin(), v.end());
	for_each(v.begin(), v.end(), Print);
	cout << endl;
}

int main()
{
	test01();
	system("pause");
	return 0;
}