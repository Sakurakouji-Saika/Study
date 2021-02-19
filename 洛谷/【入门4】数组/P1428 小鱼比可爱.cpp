#include<iostream> 
using namespace std;
int main(){
	int ans=0,n,nums[101];
	cin >> n ;
	for(int i=0;i<n;i++){
		cin >> nums[i];
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<i;j++)
		{
			if(nums[i]>nums[j])ans++;
		}
		cout << ans << ' ';
		ans=0;
	} 
	return 0;
} 
