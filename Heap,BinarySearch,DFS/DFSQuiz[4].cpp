#include<iostream>
#include<vector>
using namespace std;
int now = 0;
int N;
int visited[10] = {};


void run(int now,const vector<vector<int>>& graph) {

	visited[now] = 1; // ���� ��� �湮 ó��
	cout << now;
	for (int k = 0; k < N; k++) {
		if (graph[now][k] == 1 && !visited[k]) {
			run(k,graph);
		}
	}
}


int main() {
	cout << "N�� �Է��ϼ���: ";
	cin >> N;
	vector<vector<int>> graph(N, vector<int>(N));


	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> graph[i][j];


		}
	}
	
	run(0,graph);
	
	return 0;
}