#include<iostream>
#include<math.h>
#include <iomanip>
using namespace std;
int main(){
	double a,b,c;
	cin >> a >> b >> c;
	double p = (a+b+c)/2;
	double x = sqrt(p*(p-a)*(p-b)*(p-c));
	cout<< fixed << setprecision(1)<< x << endl;
	return 0;
}
