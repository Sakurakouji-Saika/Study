#include<iostream> 
#include<string> 
using namespace std;
int main()
{
	int zm[26]={1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,4,1,2,3,1,2,3,4}; //×ÖÄ¸ 
	int temp=0,ans=0; //¼ÆÊı 
	string str_a;
	getline(cin,str_a);
	for(int i=0;i<str_a.length();i++){
		if(str_a[i]>='a'&&str_a[i]<='z'){
			ans = ans + zm[str_a[i]-'a'];
		}else if(str_a[i]== ' '||str_a[i]== '*'||str_a[i]== '#'){
			ans++; 
		}
	}
	cout << ans;
}
