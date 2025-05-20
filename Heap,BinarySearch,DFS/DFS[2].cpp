#include<iostream>
using namespace std;

//�׷��� ��ȸ(DFS)

char value[6] = "TEQWA";
char path[6] = ""; // ���
int visited[5] = {}; // �湮����
int map[5][5] =
{
	0,1,0,0,0, // now 0  i = 1
	0,0,1,1,0, // now 1    i = 2,3
	0,0,0,0,0, // now 2 i = x
	1,0,0,0,1, // now 3 i = 0,5
	0,0,0,0,0, // now 4 i = x
};

void run(int now, int level) {
	cout << value[now]; // �����带 ���
	for (int i = 0; i < 5; i++) {
		if (map[now][i] == 1 && visited[i] == 0) {
			path[level + 1] = value[i]; // ���� ��忡 ���� ��θ� ����
			visited[i] = 1; // �湮���� ǥ��
			run(i, ++level); // i�� �迭�� �̵�
			path[level + 1] = 0; // ���� ��忡 ���� ��θ� �ʱ�ȭ
		}
	}
}

int main() {
	path[0] = 'T'; // ���۳�� ����
	visited[0] = 1;// ���۳�� �湮ó��
	run(0, 0);

	return 0;
}