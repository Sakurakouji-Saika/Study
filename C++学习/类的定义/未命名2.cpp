#include<iostream> 
using namespace std;
class newtime{
	public:
		void settime(int a,int b,int c);
		void showtime();
		private:
			int h,m,s;
};
void newtime::settime(int a,int b,int c){
	h=a;
	m=b;
	s=c;
}
void newtime::showtime(){
	cout << h << ":" << m << ":" << s; 
}
int main(){
	newtime moe;
	moe.settime(10,30,30);
	moe.showtime();
	return 0;
}
