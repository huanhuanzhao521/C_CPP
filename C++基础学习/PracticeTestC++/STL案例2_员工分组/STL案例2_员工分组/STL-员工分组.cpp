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
		worker.m_name = "员工";
		worker.m_name += nameSeed[i];

		// 10000~19999；
		worker.m_salary = rand() % 10000 + 10000;
		
		// 将员工放到容器中
		vw.push_back(worker);
	}
}


// 员工分组
void setGroup(vector<Worker>& vw, multimap<int, Worker>& mworker)
{
	for (vector<Worker>::iterator it = vw.begin(); it != vw.end(); it++) {
		// 产生随机部门编号
		int deptId = rand() % 3; // 0 1 2

		// 将员工插入到分组中
		mworker.insert(make_pair(deptId, *it));
	}
}

void showWorkerByGroup(multimap<int, Worker>& mworker)
{
	// 0 ABC  1 DE 2FG
	cout << "策划部门：" << endl;
	multimap<int, Worker>::iterator pos = mworker.find(CEHUA);
	int num1 = mworker.count(CEHUA); // 统计策划部门具体人数
	int index1 = 0;
	for (; pos != mworker.end() && index1 < num1; pos++, index1++) {
			cout << "姓名：" << pos->second.m_name << "  工资：" << pos->second.m_salary << endl;
	}
	cout << "===============" << endl;
	cout << "美术部门：" << endl;
	pos = mworker.find(MEISHU);
	int num2 = mworker.count(MEISHU); // 统计策划部门具体人数
	int index2 = 0;
	for (; pos != mworker.end() && index2 < num2; pos++, index2++) {
		cout << "姓名：" << pos->second.m_name << "  工资：" << pos->second.m_salary << endl;
	}
	cout << "===============" << endl;
	cout << "研发部门：" << endl;
	pos = mworker.find(YANFA);
	int num3 = mworker.count(YANFA); // 统计策划部门具体人数
	int index3 = 0;
	for (; pos != mworker.end() && index3 < num3; pos++, index3++) {
		cout << "姓名：" << pos->second.m_name << "  工资：" << pos->second.m_salary << endl;
	}
}

int main()
{
	srand((unsigned int) time(NULL));
	// 创建员工
	vector<Worker> vw;
	createWorker(vw);

	// 员工分组
	multimap<int, Worker> mworker;
	setGroup(vw, mworker);

	// 分组显示员工
	showWorkerByGroup(mworker);

	// 测试
	/*for (vector<Worker>::iterator it = vw.begin(); it != vw.end(); it++) {
		cout << "姓名：" << it->m_name << "  薪资：" << (*it).m_salary << endl;
	}
	cout << endl;*/

	system("pause");
	return 0;
}