#include<iostream>
using namespace std;
int main() {
	int a[8][2];
	int max = 0,max_num=0;
	for (int i = 1; i <= 7; i++) {
		for (int j = 0; j <= 1; j++) {
			cin >> a[i][j];
		}
	}
	for (int i = 1; i <= 7; i++) {
			if( a[i][0]+a[i][1] > max){
				max=a[i][0]+a[i][1]; 
				max_num=i;
			}
	}
	cout << max_num;
}
