#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

struct ballot{
	int id;
	string str_a;
	int length_a;
}vote[30];
bool cmp(ballot a,ballot b){
	if(a.length_a>b.length_a)return 1;
	else if(a.length_a==b.length_a  && a.str_a > b.str_a)return 1;
	return 0; 
}
int main(){
	int n;
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> vote[i].str_a;
		vote[i].length_a = vote[i].str_a.size();
		vote[i].id = i + 1 ;
	} 
	sort(vote,vote+n,cmp);
	cout << vote[0].id << endl << vote[0].str_a;
}
