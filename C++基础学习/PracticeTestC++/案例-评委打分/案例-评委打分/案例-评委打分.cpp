#include <iostream>
#include <vector>
#include <deque>
#include <string>
#include <algorithm>
#include <ctime>

using namespace std;

class Person
{
public:
	Person(string name,int score)
	{
		this->m_name = name;
		this->m_score = score;
	}
	string m_name;
	int m_score;
private:

};

void createPerson(vector<Person>& per)
{
	string nameSeed = "ABCDE";
	for (size_t i = 0; i < 5; i++) {
		string name = "ѡ��";
		name += nameSeed[i];

		int score = 0;
		Person p(name, score);

		// ��������person������뵽������
		per.push_back(p);
	}
	
}

void setScore(vector<Person>& per)
{
	for (vector<Person>::iterator it = per.begin(); it != per.end(); it++) {
		// ����ί�ķ��� ���뵽deque������
		deque<int> d;
		for (size_t i = 0; i < 10; i++) {
			int score = rand() % 41 + 60;  // 60~100
			d.push_back(score);
		}
		/*
		cout << "ѡ�֣�" << it->m_name << "  ��֣�" << endl;
		for (deque<int>::iterator dit = d.begin(); dit != d.end(); dit++) {
			cout << *dit << " ";
		}
		cout << endl;
		*/
		// ����
		sort(d.begin(), d.end());

		// ȥ����ߺ���ͷ�
		d.pop_back();
		d.pop_front();

		// ȡƽ����
		int sum = 0;
		for (deque<int>::iterator dit = d.begin(); dit != d.end(); dit++) {
			sum += *dit; // �ۼ�ÿ����ί�ķ���
		}
		int avg = sum / d.size();

		// ��ƽ���� ����ѡ������
		it->m_score = avg;
	}
}

void showScore(vector<Person>& per)
{
	for (vector<Person>::iterator it = per.begin(); it != per.end(); it++) {
		cout << "������" << it->m_name << "  ƽ��������" << it->m_score << endl;
	}
}

int main()
{
	// ���������
	srand((unsigned int) time(NULL));
	// ����5��ѡ��
	vector<Person> v;
	createPerson(v);
	// ����
	/*
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++) {
		cout << "������" << (*it).m_name << "  ������" << (*it).m_score << endl;
	}
	*/

	// ��5��ѡ�ִ��
	setScore(v);
	// ��ʾ���÷�
	showScore(v);

	system("pause");
	return 0;
}