#include<iostream>

#include<vector>

using namespace std;

int map[8] = {};
int path[3] = {};

void run1D(int now,int level) {



	if (now >= 8 || map[now] == 0) {
		return;
	}
	path[level] = map[now];



	if (path[level] % 2 == 0 )
	{
		for (int i = 0; i <=  level; i++)
		{
			cout << path[i] << " ";
		}
		cout << endl;
	}

	run1D(now * 2,level +1);
	run1D(now * 2 + 1,level +1);
	path[level] = 0;
}

int main() {
	map[0] = 0;
	for (int i = 1; i < 8; i++) {
		cin >> map[i];
	}

	run1D(1,0);

	return 0;
}