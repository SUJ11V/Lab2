#include <numeric>
#include <iostream>
#include <iterator>
#include <map>

using namespace std;

struct info{
	string name;
	int midterm;
	int finals;
};

int main()
{
	map<int, info> map;
	info Info;
	int number;

	cout << "학생 수를 입력하세요: ";
	cin >> number;

	cout << "학생 정보를 입력하세요\n";
	for(int i=0; i<number; i++){
		cin >> Info.name >> Info.midterm >> Info.finals;
		map.emplace(i, Info);
	}

	for(auto i=begin(map); i != end(map); ++i){
		cout << i->second.name << "중간 고사 성적 " << i->second.midterm<<"기말 고사 성적 "<<i->second.finals;
		cout << endl;
	}
}
