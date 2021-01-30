#include<iostream>
using namespace std;
int i= 1; //i 为全局变量，具有静态生存期
void other(){
	static int a =2;
	static int b ;
	//a,b为静态局部变量，具有全局寿命，局部可见。
	//只第一次进入函数时被初始化
	int c = 10 ; //C为局部变量，具有动态生存期
	//每次进入函数时都会初始化变量 c。
	a += 2;
	i += 32;
	c += 5;
	cout << "-----Other-----\n";
	cout << "i = " << a << endl << "a = " << a << endl << "b = " << b << endl << "c = " << c << endl;
	cout << endl;
	b =a;
} 
int main(){
	static int a;// 静态局部变量 ，有全局寿命，局部可见，
	int b = -10; //b,c 为局部变量。具有动态生存期。
	int c =0;
	cout << "-----Main-----" << endl;
	cout << "i = " << a << endl << "a = " << a << endl << "b = " << b << endl << "c = " << c << endl;
	c += 8; other();
	cout << "-----Main2-----" << endl;
	cout << "i = " << a << endl << "a = " << a << endl << "b = " << b << endl << "c = " << c <<endl;
	i +=10 ; other();
	return 0;
	
}
