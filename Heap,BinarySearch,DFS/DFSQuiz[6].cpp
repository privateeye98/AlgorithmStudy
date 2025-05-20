#include<iostream>

#include<vector>
int N;
using namespace std;	
int path[3] = {};
void run1D(int now,int  level, vector<vector<int>>& map) {
	
	for(int k = 0 ; k < N; k++)
		if (map[now][k] == 1) {
			path[level+1] = k;
			run1D(k, level + 1, map);
			if (path[2] != 0) {
				for (int i = 0; i < 3; i++)
				{
					cout << path[i] << " ";
				}
			}
			cout << endl;
			path[level + 1] = 0;
	}




}


int main() {

	cin >> N;
	vector<vector<int>> map(N, vector<int> (N));

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> map[i][j];

		}
	}

	path[0] = 0;
	run1D(0, 0,map);
	return 0;
}