
#include <iostream>
#include <list>
#include <string>
#include <cassert>

using namespace std;
void check(bool value)
{
	if (value)
	{
		cout << "pass!" << endl;
	}
	else
	{
		cout << "not pass!" << endl;
	}
}

list<string> SplitString(string version)
{
	list<string> result;
	auto pos = version.find_first_of('.');
	if (pos == string::npos)
	{
		result.push_back(version);
		return result;
	}

	while (pos != string::npos)
	{
		auto head = version.substr(0, pos);
		result.push_back(head);

		version = version.substr(pos + 1);
		pos = version.find_first_of('.');
	}

	result.push_back(version);

	return result;
}
bool HaveToUpdate(string localVersion, string serverVersion)
{
	list<string> listPart1 = SplitString(localVersion);
	list<string> listPart2 = SplitString(serverVersion);

	for (auto itr1 = listPart1.begin(), itr2 = listPart2.begin();
		itr1 != listPart1.end(); ++itr1, ++itr2)
	{
		//(1) your code
		//you can assume that the two list have the same size

		if (stoi(*itr1) < stoi(*itr2)) {
			return true;
		}

		if (stoi(*itr1) > stoi(*itr2)) {
			return false;
		}
	}
		
	return false;
}

int main(void)
{
	check(HaveToUpdate("1", "2") == true);
	check(HaveToUpdate("1", "1") == false);
	check(HaveToUpdate("1", "0") == false);

	check(HaveToUpdate("1.1", "1.2") == true);
	check(HaveToUpdate("1.1", "1.1") == false);
	check(HaveToUpdate("1.1", "1.0") == false);

	check(HaveToUpdate("1.123", "1.0") == false);
	check(HaveToUpdate("1.123", "1.123") == false);
	check(HaveToUpdate("1.123", "1.124") == true);

	check(HaveToUpdate("12.89", "10.123") == false);

	check(HaveToUpdate("12.89.345", "1.123.346") == false);
	check(HaveToUpdate("1.89.345", "1.89.346") == true);
	check(HaveToUpdate("1.89.345", "1.89.344") == false);
	check(HaveToUpdate("1.89.345", "1.89.345") == false);
	check(HaveToUpdate("1.89.345", "1.89.3") == false);
	check(HaveToUpdate("1.88.3", "1.89.3") == true);
	check(HaveToUpdate("1.100.3", "1.89.3") == false);

	check(HaveToUpdate("1.100.3.12", "1.100.3.55") == true);
	check(HaveToUpdate("1.100.3.56", "1.100.3.55") == false);
	check(HaveToUpdate("2.100.3.56", "1.100.3.57") == false);

	return 0;
}