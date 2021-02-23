#include<string>
#include<iostream>
#include<algorithm>
using namespace std;
struct studenf {
	string name;
	int year;
	int month;
	int day;
	int id;
}stu[100];
bool cmp(studenf a, studenf b) {
	if (a.year < b.year)return true;
	else if (a.year > b.year)return false;
	else if(a.year == b.year){
		if (a.month < b.month)return true;
		else if (a.month > b.month)return false;
		else if(a.month == b.month) {
			if (a.day < b.day)return true;
			else if(a.day > b.day) return false;
			else  if(a.day == b.day) {
				if (a.id > b.id)return true;
				else return false;
			}
		}
	}
}
int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> stu[i].name >> stu[i].year >> stu[i].month >> stu[i].day;
		stu[i].id = i;
	}
	sort(stu, stu + n, cmp);
	for (int i = 0; i < n; i++) {
		cout << stu[i].name<< endl;
	}
	return 0;
}
