#include<iostream>
using namespace std;
int stu[1000][4];
int main(){
	int k,ans=0;
	cin >> k;
	for(int i=0;i<k;i++){
		cin >> stu[i][0] >> stu[i][1] >> stu[i][2];
		stu[i][3]=stu[i][0]+stu[i][1]+stu[i][2];
	}
	for(int i=0;i<k;i++)
	{
		for(int j=i+1;j<k;j++)
		{
			if(
			abs(stu[i][0]-stu[j][0])<=5 &&
			abs(stu[i][1]-stu[j][1])<=5 &&
			abs(stu[i][2]-stu[j][2])<=5 &&
			abs(stu[i][3]-stu[j][3])<=10)
			{
				ans++;
			}
		}
	}
	cout << ans << endl;
	return 0;
}
