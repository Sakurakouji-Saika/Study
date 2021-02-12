#include<bits/stdc++.h>
using namespace std;
int main(){
	double bmi,m,h;
	cin >> m>>h;
	bmi = m / pow(h,2.0);
	if(bmi<18.5){
		cout << "Underweight";
	} 
	else if(bmi < 24){
		cout << "Normal";
	}
	else{
		cout << bmi << endl << "Overweight";
	}
}
