#include<iostream> 
using namespace std;
int main(){
	int ans=-1,zj[7]={0,0,0,0,0,0,0};
	int k,a[7],b[1000][7];
	//彩票个数 
	cin >> k;
	//彩票个数 
	
	//中奖彩票号码 
	for(int i=0;i<7;i++)
	{
		cin >> a[i];
	}
	//中奖彩票号码 
	
	//彩票号码 
	for(int i=0;i<k;i++)
	{
		for(int j=0;j<7;j++)
		{
			cin >> b[i][j];
		}
	}
	//彩票号码 
	
	
	for(int i=0;i<k;i++)
	{
		for(int j=0;j<7;j++)
		{
			for(int y=0;y<7;y++)
			{
				if(b[i][j]==a[y])
				{
					ans++;
				}
			} 
		}
		if(ans!=-1)
		{
			zj[6-ans]++;
			ans=-1;
		}
	}
	for(int i=0;i<7;i++)
	{
		cout << zj[i] << ' ';
	}
} 
