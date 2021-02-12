#include<bits/stdc++.h>
using namespace std;
//生成随机数 
vector<int>randm(int n){
	vector<int> a;
	srand((int)time(NULL));
	for(int i=0;i<n;i++){
		a.push_back(rand()%(10000+1));
	}
	return a;
}
//生成随机数 

//冒泡排序
vector<int> maopao(vector<int> &y){
	vector<int>nums;
	nums.assign(y.begin(),y.end());
	for(int i =0;i<nums.size();i++){
		for(int j=0;j<nums.size()-1-i;j++){
			if(nums[j]>nums[j+1]){
				int t=nums[j];
				nums[j]=nums[j+1];
				nums[j+1]=t;
			}
		}
	} 
	return nums;
}
//冒泡排序

//选择排序 
vector <int> xuanze(vector<int> &nums)
{
	vector<int>obj;
	obj.assign(nums.begin(),nums.end());
	for(int i=0;i<obj.size();i++)
	{
		int mix_cur;
		for(int j=mix_cur+1;j<obj.size();j++)
		{
			if(obj[j]<obj[mix_cur])
			{
				mix_cur=j;
			}
		}
		int temp=obj[i];
		obj[i]=obj[mix_cur];
		obj[mix_cur]=temp;
	}
}
//选择排序
 
int main(){
	vector<int> b;
	int k;
	cout<< "请输出要生成的随机数个数:"; 
	cin >> k;
	cout<< endl<<"--------------------------------"<<endl;
	b=randm(k);
	
	//输出随机数 
	for(auto i:b)
	{
		cout << i << "\t";
	}
	//输出随机数
	
	// 冒泡排序
	cout<<endl<< endl<<"--------------冒泡--------------"<<endl;
	vector<int> c = maopao(b);
	for(auto i :c){
		cout << i <<"\t";
	}
	cout<< endl<<"--------------冒泡--------------"<<endl<<endl;
	// 冒泡排序 
	
	// 选择排序
	cout<<endl<< endl<<"--------------选择--------------"<<endl;
	vector<int> d = maopao(b);
	for(auto i :d){
		cout << i <<"\t";
	}
	cout<< endl<<"--------------选择--------------"<<endl<<endl;
	// 选择排序 
	return 0;
}
