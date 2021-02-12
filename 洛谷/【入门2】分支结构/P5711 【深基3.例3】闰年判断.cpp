// 四年一闰，百年不闰，四百年再闰 
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	if((n%4==0&&n%100!=0)||(n%4==0&&n%400==0)){
		cout << '1';
	}
	else {
		cout << '0';
	}
	
}
