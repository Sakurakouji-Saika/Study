#include<bits/stdc++.h>
using namespace std;
int main(){
	int nf,yf;
	int y[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	cin >> nf >> yf;
	if((nf%4==0&&nf%100!=0)||(nf%4==0&&nf%400==0))y[2]=29;
	cout << y[yf]<< endl;
} 
