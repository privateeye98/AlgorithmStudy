#include<iostream>
#include<vector>
#include<algorithm>
/* ��� ��ȸ���� N���� ������ ������ �½��ϴ�. (�ִ� 1,000��)
�������� ������ �Է¹ް� ��,��,���޴� ������ ��ϸ��� ����ϰ��� �մϴ�.
�׷��� ��ݴ�ȸ ��ǻ�ʹ� ���� ������ ����, �� ĭ�� �迭���� ����� �� �ֽ��ϴ�.
�迭 �� ĭ���� ����ؼ� ��, ��, ���޴��� ������ ������ּ���.
(�������ķ� Ǯ���ּ���.)*/

using namespace std;
struct Player{
	int score;
};

int main() {

	vector<Player> players = { {6},{35},{69},{73},{83},{95},{99} };

	sort(players.begin(), players.end(), greater<int>());

	for (int i = 0; i < 3; i++) {
		cout << players[i].score << endl;
	}
	return 0;
}