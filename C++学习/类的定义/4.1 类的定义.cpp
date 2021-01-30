#include<iostream>
using namespace std;
class clock{
	public:
		void setTime(int newH = 0,int newM = 0 , int newS = 0);
		void showtime();
		private:
			int hour,minute,second;
};//定义类 
void clock::setTime(int newH,int newM,int newS){
	hour =newH;
	minute=newM;
	second=newS;
}
void clock::showtime(){
	cout << hour << ":"<<minute <<":"<<second; 
}
int main(){
	clock myClock;//定义一个 myClock 对象 
	myClock.setTime(8,30,30);
	myClock.showtime();
	return 0;
}
