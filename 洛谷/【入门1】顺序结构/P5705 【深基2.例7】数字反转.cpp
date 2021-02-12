#include<iostream>
#include<string>
using namespace std;
int main(){
	string a;//×Ö·û´®ÀàÐÍ
	cin >> a; 
	int len = a.size();
	for(int i = len - 1; i >= 0;i--) cout << a[i];
	return 0;
}
