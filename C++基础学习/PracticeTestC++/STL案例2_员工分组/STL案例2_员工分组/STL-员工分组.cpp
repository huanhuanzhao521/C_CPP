#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <ctime>

using namespace std;

#define CEHUA 0
#define MEISHU 1
#define YANFA 2

class Worker
{
public:
	string m_name;
	int m_salary;
};

void createWorker(vector<Worker>& vw)
{
	string nameSeed = "ABCDEFGHIJ";
	for (int i = 0; i < 10; i++) {
		Worker worker;
		worker.m_name = "Ա��";
		worker.m_name += nameSeed[i];

		// 10000~19999��
		worker.m_salary = rand() % 10000 + 10000;
		
		// ��Ա���ŵ�������
		vw.push_back(worker);
	}
}


// Ա������
void setGroup(vector<Worker>& vw, multimap<int, Worker>& mworker)
{
	for (vector<Worker>::iterator it = vw.begin(); it != vw.end(); it++) {
		// ����������ű��
		int deptId = rand() % 3; // 0 1 2

		// ��Ա�����뵽������
		mworker.insert(make_pair(deptId, *it));
	}
}

void showWorkerByGroup(multimap<int, Worker>& mworker)
{
	// 0 ABC  1 DE 2FG
	cout << "�߻����ţ�" << endl;
	multimap<int, Worker>::iterator pos = mworker.find(CEHUA);
	int num1 = mworker.count(CEHUA); // ͳ�Ʋ߻����ž�������
	int index1 = 0;
	for (; pos != mworker.end() && index1 < num1; pos++, index1++) {
			cout << "������" << pos->second.m_name << "  ���ʣ�" << pos->second.m_salary << endl;
	}
	cout << "===============" << endl;
	cout << "�������ţ�" << endl;
	pos = mworker.find(MEISHU);
	int num2 = mworker.count(MEISHU); // ͳ�Ʋ߻����ž�������
	int index2 = 0;
	for (; pos != mworker.end() && index2 < num2; pos++, index2++) {
		cout << "������" << pos->second.m_name << "  ���ʣ�" << pos->second.m_salary << endl;
	}
	cout << "===============" << endl;
	cout << "�з����ţ�" << endl;
	pos = mworker.find(YANFA);
	int num3 = mworker.count(YANFA); // ͳ�Ʋ߻����ž�������
	int index3 = 0;
	for (; pos != mworker.end() && index3 < num3; pos++, index3++) {
		cout << "������" << pos->second.m_name << "  ���ʣ�" << pos->second.m_salary << endl;
	}
}

int main()
{
	srand((unsigned int) time(NULL));
	// ����Ա��
	vector<Worker> vw;
	createWorker(vw);

	// Ա������
	multimap<int, Worker> mworker;
	setGroup(vw, mworker);

	// ������ʾԱ��
	showWorkerByGroup(mworker);

	// ����
	/*for (vector<Worker>::iterator it = vw.begin(); it != vw.end(); it++) {
		cout << "������" << it->m_name << "  н�ʣ�" << (*it).m_salary << endl;
	}
	cout << endl;*/

	system("pause");
	return 0;
}