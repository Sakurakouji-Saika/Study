#include<iostream>
using namespace std;
int main(){
	int k;
	cin >> k;
	while(k--){
		int a,b,c;
		cin >> a >> b;
		a = a % 100;
		b = b % 100;
		c = (a+b) % 100;
		cout << c << endl;
	}
}
