#include <iostream>
#include <vector>

using namespace std;

int main(){

	int x;
	int y;
	int number;
	int result;
	cout << "열의 수를 입력해주세요: ";
	cin >> x;

	cout << "행의 수를 입력해주세요: ";
	cin >> y;

	vector<vector<int>> a1(y);
	vector<vector<int>> a2(y);

	cout << "첫 번째 행렬의 값을 입력해주세요\n";
	for(int i=0; i<y; i++){
		for(int k=0; k<x; k++){
			cout << "첫 번째 행렬[" << i << "][" << k << "] : ";
			cin >> number;
			a1[i].push_back(number);
		}
	}

	cout << "두 번째 행렬의 값을 입력해주세요\n";
	for(int i=0; i<y; i++){
		for(int k=0; k<x; k++){
			cout << "두 번째 행렬["<< i <<"]["<< k <<"] : ";
			cin >> number;
			a2[i].push_back(number);
		}
	}

	cout << "결과 행렬\n";
	for(int i=0; i<y; i++){
		for(int k=0; k<x; k++){
			result = a1[i][k]+a2[i][k]; 
			cout << result <<" "; 			
		}
		cout << endl;
	}
}
