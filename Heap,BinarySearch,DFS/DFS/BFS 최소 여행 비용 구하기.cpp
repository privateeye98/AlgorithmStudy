#include<iostream>
#include<queue>

using namespace std;
int map[7][7] = {
{	0, 1, 1, 0, 0, 0, 0 },
{ 0, 0, 0, 1, 0, 1, 0 },
{ 0, 0, 0, 0, 1, 0, 0 },
{ 0, 0, 0, 0, 0, 1, 0 },
{ 0, 0, 0, 0, 0, 0, 1 },
{ 0, 0, 0, 0, 0, 0, 1 },
{ 0, 0, 0, 0, 0, 0, 0 }
};

int value[10] = { 5, 1 , 35 , 10 ,70 , 20 };
int visited[7] = { 1 };
int minvalue = 987654321;

void dfs(int now, int sum) {
	if (now == 6) {
		if (sum < minvalue) 
			 minvalue = sum;

			 return;
		}

		for (size_t i = 0; i < 7; i++) {
			if (map[now][i] == 0) continue;
			if (visited[i] == 1) continue;

			visited[i] = 1;
			dfs(i, sum + value[i]);
			visited[i] = 0;
		}
	}


int main() {
	dfs(0, value[0]);
	cout << minvalue << endl;

	return 0;
}