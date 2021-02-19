#include<iostream> 
#include<string>
using namespace std;
struct Student{
	string name;
	int age;
	int score; 
}stu[1000];
int main(){
	int k;
	cin >> k;
	for(int i=0;i<k;i++)
	{
		cin >> stu[i].name >> stu[i].age >> stu[i].score;
	}
	for(int i=0;i<k;i++)
	{
		int temp;
		if(stu[i].score * 1.2 >600)
		{
			temp = 600;
		}
		else
		{
			temp = stu[i].score  * 1.2 ;
		}
		cout << stu[i].name << ' ' << stu[i].age + 1 << ' '<< temp << endl;
	}
}
