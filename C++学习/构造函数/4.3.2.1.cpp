#include<iostream>
using namespace std;
class newtime{
	public:
		newtime(int a,int b,int c);
		void settime(int a,int b,int c);
		void showtime();
		private:
		int h,m,s; 
};
newtime::newtime(int a,int b,int c):h(a),m(b),s(c){}
void newtime::settime(int a,int b,int c){
	h=a;
	m=b;
	s=c;
}
void newtime::showtime(){
	cout << h << ":" << m << ":" << s; 
}
int main(){
	newtime c(0,0,0);
	c.showtime();
	return 0;
}
