#include <iostream>
#include <set>

using namespace std;

void printSet(set<int>& st)
{
	for (set<int>::iterator it = st.begin(); it != st.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
}

void printMultiSet(multiset<int>& mst)
{
	for (multiset<int>::iterator it = mst.begin(); it != mst.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
}

void test01()
{
	set<int> st;

	// ��������insert
	st.insert(10);
	st.insert(40);
	st.insert(30);
	st.insert(20);
	st.insert(30);
	

	// ����set
	// set�����ص㣺����Ԫ�ز���ʱ�Զ�������
	// set��������������ظ�ֵ
	printSet(st);

	// ��������
	set<int> st2(st);
	printSet(st2);

	// ��ֵ����
	set<int> st3;
	st3 = st2;
	printSet(st3);

	cout << "MultiSet �Ĳ�����" << endl;
	multiset<int> mst1;
	mst1.insert(10);
	mst1.insert(40);
	mst1.insert(30);
	mst1.insert(20);
	mst1.insert(30);
	printMultiSet(mst1);
}

int main()
{
	test01();
	system("pause");
	return 0;
}