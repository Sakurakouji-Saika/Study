#include<iostream>
#include<string>
using namespace std;
int main() {
	int girl=0,boy=0,str_len;
	string str_a;
	cin >> str_a;
	for(int i=0;i<str_a.length()-2;i++){
		boy+=(str_a[i]=='b'|| str_a[i+1]=='o'||str_a[i+2]=='y');
	}
	for(int i=0;i<str_a.length()-3;i++){
		girl+=(str_a[i]=='g'||str_a[i+1]=='i'||str_a[i+2]=='r'||str_a[i+3]=='l');
	}
    cout<<boy<<endl<<girl;               
    return 0;
}
