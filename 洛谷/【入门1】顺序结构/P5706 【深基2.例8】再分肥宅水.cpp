#include<iostream>
#include <iomanip>
using namespace std;
int main(){
	double t,n;
	cin >> t >> n;
	cout <<  fixed << setprecision(3) << t / n << endl << int(n * 2) << endl;
	return 0;
}
