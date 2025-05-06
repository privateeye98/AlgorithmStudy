#include<iostream>
#include<vector>
using namespace std;
/* 
3 x 3 사이즈의 분당의 밭에 농작물이 자라고 있습니다.
아래 이미지는 네 좌표에 7개의 작물들이 심어져 있는 그림입니다.
(0, 0) 좌표에는 밑에서 부터 8, 5, 2의 내구도를 갖는 작물이 심어져 있습니다.
어느날 갑자기 강풍이 불어 농작물들이 피해를 입었습니다.
강풍이 한번 불면, 가장 위에 있는 작물만, 강풍의 세기만큼 내구도가 깎입니다.
만약 강풍의 세기가 가장 위에 있는 작물의 내구도보다 더 크다면, 작물은 사라집니다.
강풍이 K번 불고난 뒤, 남은 농작물의 총 개수를 출력하세요.
[입력]
먼저 입력 좌표의 수(N)를 입력 받고, 그 다음줄부터 좌표당 작물정보가 입력됩니다.
이제 N개의 작물 정보가 입력됩니다. (좌표y, 좌표x, 작물의 내구도들)
작물 정보가 입력 된 후에는 강풍이 부는 횟수 (K)를 입력 받습니다.
이제 K번의 각 강풍의 세기를 입력 받습니다.

*/
int main() {
	vector<int> crops[3][3]; // 2차원 벡터로 작물의 내구도 저장
	int map[3][3] = { 0 }; // 작물의 위치를 저장
	int N;
	cout << "좌표의 수를 입력하세요: ";
	cin >> N;
	for (int i = 0; i < N; i++) {
		int hp;
		int y, x;
		cout << "좌표를 입력하세요:";
		cin >> y >> x;
		map[y][x] = 1; // 좌표에 작물이 심어져 있음을 표시
		cout << "작물의 내구도를 입력해주세요. 1개씩입력";
		for (int j = 0; j < 3; j++) {
			cin >> hp; crops[y][x].push_back(hp); // 작물의 내구도를 벡터에 저장
		}
	}
	// 작물 정보 출력

	int K; // 강풍이 부는 횟수
	cout << "강풍이 부는 횟수를 입력하세요: ";
	cin >> K;

	for (int i = 0; i < K; i++) {
		int wind;
		cout << "강풍의 세기를 입력하세요:";
		cin >> wind;

		for (int y = 0; y < 3; y++) {
			for (int x = 0; x < 3; x++) {
				if (map[y][x] == 1) { //작물이 심어져있다면
					int& top = crops[y][x].back(); // 가장 위에있는 작물의 내구도
					if (top > wind) {
						top -= wind; // 내구도 감소
					}
					else {
						crops[y][x].pop_back(); // 작물 제거
						if (crops[y][x].empty()) {
							map[y][x] = 0; // 작물이 모두 제거되면 좌표 비우기
						}
					}
				}
			}
		}
	}
	
	int total = 0;
	for (int y = 0; y < 3; y++) {
		for (int x = 0; x < 3; x++) {
			total += crops[y][x].size();
		}
	}
	cout << "남은 작물의 수: " << total << endl;
	return 0;
}