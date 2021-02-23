#include<iostream>
using namespace std;
int main(){
	int n,ans=0,nums[10000];
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> nums[i];
	}
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-1;j++){
			if(nums[j]>nums[j+1]){
				swap(nums[j],nums[j+1]);
				ans++;
			}
		}
	}
	cout << ans;
}
