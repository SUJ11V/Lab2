#include <iostream>
#include <vector>

using namespace std;

int main(){

	int x;
	int y;

	cout << "열의 수를 입력해주세요: ";
	cin >> x;

	cout << "행의 수를 입력해주세요: ";
	cin >> y;

	vector<vector<int>> a1(y);
	vector<vector<int>> a2(y);

	cout << "첫 번째 행렬의 값을 입력해주세요\n";
	for(int i=0; i<y; i++){
		for(int j=0; j<x; j++){
			cout << "a1[" << i << "][" << j << "] : ";
			int n;
			cin >> n;
			a1[i].push_back(n);
		}
	}

	cout << "두 번째 행렬의 값을 입력해주세요\n";
	for(int i=0; i<y; i++){
		for(int j=0; j<x; j++){
			cout << "a2[" << i << "][" << j <<"] : ";
			int n;
			cin >> n;
			a2[i].push_back(n);
		}
	}

	cout << "첫 번째 행렬 + 두 번째 행렬\n";
	for(int i=0; i<y; i++){
		for(int j=0; j<x; j++){
			cout << a1[i][j] + a2[i][j] << " "; 			
		}
		cout << endl;
	}
}
