#include<iostream>
#include<vector>
using namespace std;

int main(){
	vector<int> map[3][3];
	int N;
	cin >> N;

	for (int i = 0; i < N; i++) {
		int y, x, hp;
		cin >> y >>x >> hp;
		map[y][x].push_back(hp);
	}

	int K;
	cin >> K;
	vector<int> wind(K);
	for (int i = 0; i < K; i++) {
		cin >> wind[i];
	}

	for (int i = 0; i < K; i++) {
		int winds = wind[i];
		bool attacked = false;

		for (int y = 0; y < 3; y++) {
			for (int x = 0; x < 3; x++) {
				if (!map[y][x].empty()) {
					int& topCrop = map[y][x].back();
					if (topCrop <= wind) {
						map[y][x].pop_back();
					}
					else {
						topCrop -= wind;
					}
					attacked = true;
					break;
				}
			}


			if (attacked) break;
		}
	}
	int alive = 0;
	for (int y = 0; y < 3; y++) {
		for (int x = 0; x < 3; x++) {
			alive += map[y][x].size();
		}
	}
	cout << alive << endl;
	return 0;
}