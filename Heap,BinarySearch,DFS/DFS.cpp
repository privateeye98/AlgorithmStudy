#include<iostream>

using namespace std;
// 트리 순회 (dfs)
char value[6] = "TBECD";
char path[6] = "";


int map[5][5] = {
	0,1,1,0,0,
	0,0,0,1,1,
	0,0,0,0,0,
	0,0,0,0,0,
	0,0,0,0,0
};
void run(int now, int level) {
	cout << value[now]; //현재 노드 출력 ex) value[0] = T
	for (int i = 0; i < 5; i++) {
		if (map[now][i] == 1) {
				path[level + 1] = value[i]; //다음 노드에 대한 경로를 저장
				run(i, level + 1); //재귀호출
				path[level + 1] = 0; //다음 노드에 대한 경로를 초기화
		}
	}
}

int main() {
	path[0] = 'T';
	run(0, 0);

	return 0;
}