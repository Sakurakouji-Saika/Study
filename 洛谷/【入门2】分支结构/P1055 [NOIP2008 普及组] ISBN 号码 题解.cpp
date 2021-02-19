#include<iostream>
#include<string>
using namespace std;
int main(){
    char mod[12]="0123456789X";
    string a;
    int j=1,temp=0;
    cin >> a;
    for(int i=0;i<12;i++){
        if(a[i]=='-')continue;
        temp=temp+(a[i]-48) * j++;
    }
    if(mod[temp%11]==a[12])
		cout <<"Right";
    else{
        a[12]=mod[temp%11];
        cout << a;
    }
    return 0;
}
