#include <iostream>
#include <vector>

using namespace std;

int main(){

	int x; //column
	int y; //row

	cout << "input x : ";
	cin >> x;

	cout << "input y : ";
	cin >> y;

	vector<vector<int>> arr1(y);
	vector<vector<int>> arr2(y);

	cout << "input one procession\n";
	for(int i=0; i<y; i++){
		for(int j=0; j<x; j++){
			cout << "arr1[" << i << "][" << j << "] : ";
			int n;
			cin >> n;
			arr1[i].push_back(n);
		}
	}

	cout << "input two procession\n";
	for(int i=0; i<y; i++){
		for(int j=0; j<x; j++){
			cout << "arr2[" << i << "][" << j <<"] : ";
			int n;
			cin >> n;
			arr2[i].push_back(n);
		}
	}

	cout << "----------------------------------\n";
	cout << "one procession + two procession\n";
	cout << "----------------------------------\n";
	cout << "   ";

	for(int i=0; i<x;i++){
		cout << "[" << i << "] ";
	}

	cout << endl;
	for(int i=0; i<y; i++){
		cout << "[" << i << "] ";
		for(int j=0; j<x; j++){
			cout << arr1[i][j] + arr2[i][j] << " "; 			
		}
		cout << endl;
	}
}
