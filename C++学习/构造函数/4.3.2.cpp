#include<iostream>
using namespace std;
class clock{
	public:
		clock(int newH , int newM , int newS);//构造函数 
		void setTime(int newH = 0,int newM = 0 , int newS = 0);
		void showtime();
		private:
			int hour,minute,second;
};//定义类 

//构造函数的实现： 
clock::clock(int newH , int newM , int newS):hour(newH),minute(newM),second(newS){
	}
void clock::setTime(int newH,int newM,int newS){
	hour =newH;
	minute=newM;
	second=newS;
}
void clock::showtime(){
	cout << hour << ":"<<minute <<":"<<second; 
}
	int main(){
		clock c(0,0,0);//自动调用构造函数
		c.showtime();
		return 0; 
	} 

