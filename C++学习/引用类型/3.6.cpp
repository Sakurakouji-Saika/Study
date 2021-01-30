#include<iostream>
using namespace std;
int swap(int& a,int& b){
	int t=a;
	a = b;
	b = t;
}
int main(){
	int x=10,y=5;
	cout << "x = " << x << " y = " << y <<endl;
	swap(x,y);
	cout << "x = " << x << " y = " << y <<endl;
	return 0;
}
