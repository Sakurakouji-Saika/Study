#include<iostream>
using namespace std;
class newtime{
	public:
		newtime(int a,int b,int c);
		newtime();
		void settime(int a,int b,int c);
		void showtime();
		private:
			int h,m,s;
};
newtime::newtime():h(0),m(0),s(0){}
newtime::newtime(int a,int b,int c):h(a),m(b),s(c){}
void newtime::settime(int a,int b,int c){
	h=a;
	m=b;
	s=c;
}
void newtime::showtime(){
	cout << h <<":"<<m<< ":"<<s; 
}
int main(){
	newtime c(8,8,8);
	newtime c2;
	c2.showtime();
	cout<<endl;
	c.showtime();
	return 0;
}


