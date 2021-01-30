#include<iostream> 
#include<string> 
using namespace std;
class examinfo{
	private:
		string name;//课程昵称
		enum{
			sgrade,spass,spercentage
		}mode; 
		union{
			char grade;//等级制的成绩
			bool pass; //标记是否通过
			int percent; //百分制的成绩 
		};
		public:
			//三种构造函数，分别用等级，是否等国和百分比初始化
			 examinfo(string name,char grade)
			 :name(name),mode(sgrade),grade(grade){
			 }
			 examinfo(string name,bool pass)
			 :name(name),mode(spass),pass(pass){
			 }
			 examinfo(string name,int percent)
			 :name(name),mode(spercentage),percent(percent){
			 }
			 void show();
};
void examinfo::show(){
	cout << name <<":";
	switch (mode){
		case sgrade: cout << grade;break;
		case spass : cout << (pass ? "Pass":"Fail");break;
		case spercentage : cout << percent;break;
	}
	cout <<endl;
	
}
int main(){
	examinfo course1("English",'B');
	examinfo course2("Calculus",true);
	examinfo course3("C++ Programming",85);
	course1.show();
	course2.show();
	course3.show();
	return 0;
}
