#include<iostream>
using namespace std;
int main(){
	int k=0,n,m,nums[101];
	for(int i=0;i<101;i++){
		cin >> nums[i];
		if(nums[i]==0)break;
		k++;
	}
	for(int i=k-1;i>=0;i--){
		cout << nums[i] << ' ';
	}
	return 0;
}
