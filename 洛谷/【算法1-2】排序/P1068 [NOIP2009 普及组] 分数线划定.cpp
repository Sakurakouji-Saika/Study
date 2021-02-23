#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
struct zhiyuanzhe{
	int id; //报名号 
	int cj; //成绩分 
}; 
bool cmp(zhiyuanzhe a,zhiyuanzhe b){
	if(a.cj>b.cj)return 1;
	else if(a.cj==b.cj){
		if(a.id<b.id)return 1;
		else return 0;
	} 
	else return 0;
}
int main(){
	int n,m;
	cin >> n >> m;
	m = floor(m * 1.5); //取整 
	zhiyuanzhe zyz[n];//志愿者 zyz
	for(int i=0;i<n;i++){
		cin >> zyz[i].id >> zyz[i].cj;
	} 
	sort(zyz,zyz+n,cmp);
	int fsx=zyz[m-1].cj;
	int rs=m;
	for(int i=m;i<n;i++){
		if(zyz[i].cj==fsx)rs++;
	}
	cout <<  fsx << ' ' << rs << endl;
	for(int i=0;i<rs;i++){
		cout << zyz[i].id << ' ' << zyz[i].cj << endl;
	}
	return 0;
} 
