#include<iostream>

int map[5][5] = {
	0,0,0,1,0,
	0,0,1,0,0,
	0,0,0,1,1,
	1,0,1,0,1,
	0,0,1,1,0
};

bool visited[5] = {};
bool hasCycle = false;


void dfs(int u, int parent) {
	visited[u] = true;
	for (int v = 0; v < 5; ++v) {
		if (map[u][v] == 0) continue;

		if (!visited[v])
		{
			dfs(v, u);
		}
		else if (v != parent) {
			hasCycle = true;
		}
	}
}

int main() {
	for (int u = 0; u < 5; ++u) {
		if (!visited[u])
			dfs(u, -1);
	}
	

	return 0;
}