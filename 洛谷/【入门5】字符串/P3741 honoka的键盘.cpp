#include<iostream>
#include<iostream>
using namespace std;
int main(){
	int num,ans=0;
	string str_a;
	cin >> num;
	cin >> str_a;
	for(int i =0;i<num;i++){
		if(str_a[i]=='V'&& str_a[i+1]=='K'){
			ans++;
			str_a[i]='X';
			str_a[i+1]='X';
		}
	}
	for(int i=0;i<num;i++){
		if(str_a[i]!='X'&&str_a[i]==str_a[i+1]){
			ans++;
			break;
		}
	}
	cout << ans;
}
