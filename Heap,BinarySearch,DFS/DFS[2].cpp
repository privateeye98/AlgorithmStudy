#include<iostream>
using namespace std;

//그래프 순회(DFS)

char value[6] = "TEQWA";
char path[6] = ""; // 경로
int visited[5] = {}; // 방문여부
int map[5][5] =
{
	0,1,0,0,0, // now 0  i = 1
	0,0,1,1,0, // now 1    i = 2,3
	0,0,0,0,0, // now 2 i = x
	1,0,0,0,1, // now 3 i = 0,5
	0,0,0,0,0, // now 4 i = x
};

void run(int now, int level) {
	cout << value[now]; // 현재노드를 출력
	for (int i = 0; i < 5; i++) {
		if (map[now][i] == 1 && visited[i] == 0) {
			path[level + 1] = value[i]; // 다음 노드에 대한 경로를 저장
			visited[i] = 1; // 방문함을 표시
			run(i, ++level); // i번 배열로 이동
			path[level + 1] = 0; // 다음 노드에 대한 경로를 초기화
		}
	}
}

int main() {
	path[0] = 'T'; // 시작노드 선언
	visited[0] = 1;// 시작노드 방문처리
	run(0, 0);

	return 0;
}