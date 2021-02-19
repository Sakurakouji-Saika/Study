#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
struct Student {
	string name;
	int chinese;
	int mathematics;
	int english;
	int sum_result;
}stu[1000];
bool cmp(Student a, Student b) {
	return a.name > b.name;
}
int main() {
	int k;
	cin >> k;
	for (int i = 0; i < k; i++)
	{
		cin >> stu[i].name >> stu[i].chinese >> stu[i].mathematics >> stu[i].english;
		stu[i].sum_result = stu[i].chinese + stu[i].mathematics + stu[i].english;
	}
	//	sort(stu,stu+k);
	for (int i = 0; i < k; i++)
	{
		for (int j = i + 1; j < k; j++)
		{
			if(abs(stu[i].chinese-stu[j].chinese)<=5&&abs(stu[i].mathematics-stu[j].mathematics)<=5&&abs(stu[i].english-stu[j].english)<=5&&abs(stu[i].sum_result-stu[j].sum_result)<=10) {
				cout<<stu[i].name<<" "<<stu[j].name<<endl;
			}
		}
	}
}
