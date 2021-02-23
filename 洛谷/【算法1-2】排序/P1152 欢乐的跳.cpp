#include<iostream>
#include<string>
#include<algorithm>
#include<cmath>
using namespace std;
int main(){
	int n,nums[1000],c[1000];
	cin >> n;
	for(int i=0;i<n;i++){
		cin >>  nums[i];
	}
	for(int i=0;i<n-1;i++){
		c[i]=abs(nums[i]-nums[i+1]);
	}
	sort(c,c+n);
	for(int i=0;i<n-1;i++){
//		cout << c[i] << "\t";
		if(c[i]!=i+1) {
			cout << "Not jolly";
			return 0;
		}
	}
	cout << "Jolly";
	return 0;
}
