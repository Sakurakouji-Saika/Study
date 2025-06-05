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
	PencilBox(const PencilBox& box) :id(++current_pencil_box_id)
	{
		cout << "PencilBox(const PencilBox& " << box.id << ") id=" << id << endl;
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
	Student(const Student& stu) :id(++current_student_id)
	{
		cout << "Student(const Student& " << stu.id << ") id=" << id << endl;
	}
	~Student()
	{
		cout << "~Student() id=" << id << endl;
	}
	int id = 0;
	PencilBox m_pencilBox;
};

void pass_by_value(Student stu)
{
	cout << "pass_by_value stu " << stu.id << endl;
}
void pass_by_reference(Student& stu)
{
	cout << "pass_by_reference stu " << stu.id << endl;
}
int main(void)
{
	cout << "main begin" << endl;
	//(1) your code.

	Student s1;
	Student s2(s1);

	{
		pass_by_value(s2);
	}

	pass_by_reference(s1);

	cout << "main end" << endl;

	return 0;
}