#include<iostream>
#include<vector>
using namespace std;


int me = 0; // ��ġ 

int main() {
	int N = 0;
	cin >> N;
	
	vector<vector<int>> map(N, vector<int>(N)); //N X N ������ ��� ���� ����


	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> map[i][j]; // ��Ŀ� �� ����
		}
	}
	for (int k = 0; k < N; k++) {
		if (map[0][k] == 1) {
			//�ڽĳ�� ���
			cout << k << " ";
		}
	}
	
	
		for (int j = 0; j < N; j++) { //�θ��� ���
			if (map[0][j] == 1) {
				cout << j << " "; 
		}
		}
	
	return 0;
}