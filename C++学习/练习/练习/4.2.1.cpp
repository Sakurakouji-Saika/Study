#include <iostream>
using namespace std;

int current_id = 0;

struct Student
{
	Student(void) :id(current_id)
	{
		cout << " Student() id=" << id << endl;
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
	//(1) your code 
	Student stu1;
	
	Student stu2;

	Student stu3;


	return 0;
}