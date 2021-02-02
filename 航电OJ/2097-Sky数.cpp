#include<iostream>
using namespace std;
int main(){
	int n;
	while(cin >> n && n){
       int a,b,c,d;
        d=n%10;
        c=((n%100)-d)/10;
        a=n/1000;
        b=(n/100)%10;
        int sum1=a+b+c+d;
        int num1=n%16;
        int num2=(n%(16*16)-num1)/16;
        int num4=n/(16*16*16);
        int num3=(n/(16*16))%16;
        int sum2=num1+num2+num3+num4;
        int p,q,r,s;
        p=n%12;
        q=((n%(12*12))-p)/12;
        s=n/(12*12*12);
        r=(n/(12*12))%12;
        int sum3=p+q+r+s;
        if(sum1==sum2&&sum1==sum3)
        {
            printf("%d is a Sky Number.\n",n);
        }
        else
        {
            printf("%d is not a Sky Number.\n",n);      }
    }
    return 0;
}
