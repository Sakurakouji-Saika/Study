#include<iostream>
#include <iomanip>
using namespace std;
int main(){
	const double c = 1.9;
	double a , b;
	cin >> a >> b;
	cout <<  int ((a + (b*0.1)) / c) << endl;
	return 0;
}
