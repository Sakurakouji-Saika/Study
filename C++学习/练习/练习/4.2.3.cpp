#include <iostream>

using namespace std;

int current_pencil_box_id = 0;
int current_student_id = 0;
//�ľߺ�
struct PencilBox
{
	PencilBox(void) :id(++current_pencil_box_id)
	{
		cout << "PencilBox() id=" << id << endl;
	}
	~PencilBox()
	{
		cout << "~PencilBox() id=" << id << endl;
	}
	int id = 0;
};
//ѧ��
struct Student
{
	Student(void) :id(++current_student_id)
	{
		cout << "Student() id=" << id << endl;
	}
	~Student()
	{
		cout << "~Student() id=" << id << endl;
	}
	int id = 0;
	PencilBox m_pencilBox;
};

int main(void)
{
	cout << "main begin" << endl;
	//(1) your code. 
	// ��ʾ��������֮�󣬸����ͷŵİ취֮һ����ʹ�ô������������ڴ������ڴ������󣩣�
	// ����ʹ�ö�̬�ڴ��ֶ����������ʱ�ͷ�

	Student s1;
	{
		Student s2;
	}
	Student s3;
	

	cout << "main end" << endl;

	return 0;
}