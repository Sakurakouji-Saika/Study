#include <iostream>
using namespace std;
int main(void){
	int y,m,d;
	while(cin>>y){
		int s1[11]={31,28,31,30,31,30,31,31,30,31,30};
		int s2[11]={31,29,31,30,31,30,31,31,30,31,30};
		int s=0;
		cin.ignore();//ºöÂÔÒ»¸ö×Ö·û 'Ð±¸Ü' 
		cin>>m;
		cin.ignore();//ºöÂÔÒ»¸ö×Ö·û 'Ð±¸Ü' 
		cin>>d;
		if((y%400==0)||((y%4==0)&&(y%100!=0)))
		{	for(int i=0;i<m-1;i++)
				s+=s2[i];
				s+=d;
		}
		else
		{	for(int j=0;j<m-1;j++)
				s+=s1[j];
				s+=d;
		}
		cout<<s<<endl;
	}
	return 0;
}
