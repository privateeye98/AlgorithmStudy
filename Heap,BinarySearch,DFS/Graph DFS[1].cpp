/*문제 1번
현수는 다른 조직으로 이직에 성공했습니다.
이 그룹의 조직도를 인접행렬(N x N 사이즈)로 전달 받으면, 현수의 직속 보스와 직속 부하 들이 누군지 출력 해 주세요.
문제 조건
1.현수는 0번 노드입니다.
2.부하들끼리 번호 순서대로 출력 해 주세요*/

#include<iostream>
#include<vector>
int hyunsu = 0;
using namespace std;
int N;

int main() {

	cout << "N을 입력해주세요.";
	cin >> N;
	vector<vector<int>> map(N, vector<int>(N));

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> map[i][j]; // 행렬에 기입;
		}
	}
	for (int i = 0; i < N; i++) {
		if (map[i][hyunsu] == 1) { // 직속 보스 출력
			cout << "boss : " << i << endl;
		}
	}
	for (int i = 0; i < N; i++) {
			if (map[hyunsu][i] == 1 ) {
				cout << "under : " << i << " ";
		}
	}

	return 0;
}