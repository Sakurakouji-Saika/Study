#include <iostream>
using namespace std;

int current_id = 0;

struct Student
{
	Student(void) :id(current_id)
	{
		cout << "Student() id=" << id << endl;
		++current_id;
	}
	~Student()
	{
		cout << "~Student() id=" << id << endl;
	}
	int id = 0;
};

int main(void)
{
	//(1) your code. 
	// ��ʾ��������֮�󣬸����ͷŵİ취֮һ����ʹ�ô������������ڴ������ڴ������󣩣�
	// ����ʹ�ö�̬�ڴ��ֶ����������ʱ�ͷ�
	Student s1;
	{
		{
			Student s2;
			Student s3;
		}
		Student s4;
	}

	return 0;
}