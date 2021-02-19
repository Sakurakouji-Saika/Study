#include<iostream>
#include<string>
int main()
{
	std::string str_a;
	int ans=0;
//	while(std::cin >> str_a){
	std::getline(std::cin,str_a);//¶ÁÈ¡Ò»ĞĞ 
		for(int i=0;i<str_a.size();i++)
		{
			if
			(
			str_a[i]>='a' && str_a[i]<='z' ||
			str_a[i]>='A' && str_a[i]<='Z' ||
			str_a[i]>='0' && str_a[i]<='9' 
			)ans++;
		}
//	}
	std::cout << ans << std::endl;
	return 0;
}
