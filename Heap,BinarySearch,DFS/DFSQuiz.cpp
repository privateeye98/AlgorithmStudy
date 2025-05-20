#include<iostream>
#include<vector>
using namespace std;


int me = 0; // 위치 

int main() {
	int N = 0;
	cin >> N;
	
	vector<vector<int>> map(N, vector<int>(N)); //N X N 사이즈 행렬 동적 선언


	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> map[i][j]; // 행렬에 값 대입
		}
	}
	for (int k = 0; k < N; k++) {
		if (map[0][k] == 1) {
			//자식노드 출력
			cout << k << " ";
		}
	}
	
	
		for (int j = 0; j < N; j++) { //부모노드 출력
			if (map[0][j] == 1) {
				cout << j << " "; 
		}
		}
	
	return 0;
}