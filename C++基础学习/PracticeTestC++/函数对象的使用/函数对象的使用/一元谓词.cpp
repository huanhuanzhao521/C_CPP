#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// һԪν��

class GreateFive
{
public:
	bool operator()(int val)
	{
		return val > 5;
	}
};

void test01()
{
	vector<int> v;
	for (int i = 0; i < 10; i++) {
		v.push_back(i);
	}

	// ���������� ��û�д���5������
	// GreateFive()�����ĺ�������
	vector<int>::iterator it = find_if(v.begin(), v.end(), GreateFive());
	if (it == v.end()) {
		cout << "δ�ҵ�" << endl;
	} else {
		cout << "�ҵ��˴���5������Ϊ��" << *it << endl;
	}
}

int main()
{
	test01();
	system("pause");
	return 0;
}