#include<iostream>

using namespace std;

char value[6] = "TEQWA";
char path[6] = ""; // 경로
int visited[5] = {}; //방문여부

int map[5][5] = {
	0,1,0,0,0,
	0,0,1,1,0,
	0,0,0,0,0,
	1,0,0,0,1,
	0,0,0,0,0
};
void run(int now, int level)
{
	cout << value[now]; //현재노드를 출력

	for (int i = 0; i < 5; i++)
	{
		if (map[now][i] == 1 && visited[i] == 0)
		{
 			path[level + 1] = value[i]; // 다음 노드에 대한 경로를 저장
			visited[i] = 1;
			run(i, level + 1);
			path[level + 1] = 0;
		}
	}
}

int main() {
	path[0] = 'T'; // 0번 패스에 저장
	visited[0] = 1; // 0번 노드 방문처리
	run(0, 0);


	return 0;
}