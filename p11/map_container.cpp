#include <numeric>
#include <iostream>
#include <iterator>
#include <map>

using namespace std;

struct stu{
	string name;
	int middle_test;
	int final_test;
};

int main()
{
	map<int, stu> map;
	stu info;
	int num;

	cout << "How many student : ";
	cin >> num;

	cout << "input student info\n";
	cout << "-----------------------\n";
	cout << "name  middle  final\n";
	cout << "-----------------------\n";
	for(int i=0; i<num; i++)
	{
		cin >> info.name >> info.middle_test >> info.final_test;
		map.emplace(i, info);
	}

	cout << "-----------------------\n";
	cout << "student info list\n";
	cout << "-----------------------\n";	
	for(auto i=begin(map); i != end(map); ++i){
		cout <<"["<< i->first << "] ";
		cout << i->second.name << " " << i->second.middle_test << " " << i->second.final_test;
		cout << endl;
	}
}
