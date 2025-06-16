#include<iostream>
#include<queue>

using namespace std;


int map[3][3] = {
	{0, 0, 0},
	{0, 0, 0},
	{0, 0, 0}
};

struct Node {
	int x;
	int y;
	int level;
};

queue<Node> q;


int direct[4][2] = {
	{0, 1 },  // 오른쪽
{ 1, 0 },  // 아래
{ 0, -1 }, // 왼쪽
{ -1, 0 }  // 위
};

int used[6] = {};


int main() {

	q.push(Node{ 1,0,1 });
		map[0][1] = 1;

	while (!q.empty())
	{
		Node now = q.front();

		for (size_t i = 0; i < 4; i++)
		{
			int dy = now.y + direct[i][0];
			int dx = now.x + direct[i][1];

			if (dy < 0 || dx < 0 || dy > 2 || dx > 2)
				continue;
			if (map[dy][dx] > 0)
				continue;

			Node next = Node{ dx,dy,now.level + 1 };
			map[dy][dx] = next.level;

			q.push(next);
		}
		q.pop();
	}
	return 0;
}