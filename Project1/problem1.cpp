#include<iostream>

#include<vector>	
#include<algorithm>

using namespace std;
/*  ���� 1��
���ڿ� ���ڰ� �� ���� n�� Set�� ����ü�迭�� �Է¹�������. (1 <= n <= 100)
�켱������ ���� �������ķ� ���� �� ����ϸ� �˴ϴ�.
[�켱����]
1. ���� ���ڰ� �� �տ� �־�� �ϸ� (��������)
2. ���� ������ ���, �� ���� ���ڰ� �տ� ��ġ�Ǿ�� �մϴ�.  */
struct Player {
	int score;
	string name;
};

int main() {
	{
		vector<Player> players = { {4,"A"},{4,"F"},{5,"E"},{5,"F"},{4,"A"},{1,"C"} };
		sort(players.begin(),players.end())

	return 0;
}
