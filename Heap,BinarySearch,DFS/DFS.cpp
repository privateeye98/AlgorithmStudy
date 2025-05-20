#include<iostream>

using namespace std;
// Ʈ�� ��ȸ (dfs)
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
	cout << value[now]; //���� ��� ��� ex) value[0] = T
	for (int i = 0; i < 5; i++) {
		if (map[now][i] == 1) {
				path[level + 1] = value[i]; //���� ��忡 ���� ��θ� ����
				run(i, level + 1); //���ȣ��
				path[level + 1] = 0; //���� ��忡 ���� ��θ� �ʱ�ȭ
		}
	}
}

int main() {
	path[0] = 'T';
	run(0, 0);

	return 0;
}