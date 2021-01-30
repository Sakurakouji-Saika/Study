#include<iostream>
#include<iomanip> 
#include<string>
using namespace std;
struct student{ //学生信息结构体 
	int num; //学号 
	string name; //姓名 
	char sex; //性别 
	int age;//年龄 
};
int main(){
	student moe ={20302077,"Moe",'F',19};
	cout << "Num:" << moe.num <<endl;
	cout << "Name:" << moe.name <<endl;
	cout << "Sex:"<< moe.sex<<endl;
	cout << "Age:"<< moe.age<<endl; 
} 
