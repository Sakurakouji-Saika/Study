#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin >>n>>m;
	vector<int>nums;
	for(int i=0;i<m;i++){
		int temp;
		cin>>temp;
		nums.push_back(temp);
	} 
	sort(nums.begin(),nums.end());
	for(auto i:nums){
		cout << i<< " ";
	}
}
