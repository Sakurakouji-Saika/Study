#include<iostream>
using namespace std;
float Convert(float TempFer);
int main(){
	float F;
	cin >> F;
	cout << endl;
	cout << Convert(F) << endl;
	return 0; 
} 
float Convert(float TempFer){
	float C;
	C = (TempFer - 31) * 5 / 9;
	return C;
}
