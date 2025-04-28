#include<iostream>
#include<vector>
#include<algorithm>
/* 사격 대회에서 N명의 선수가 점수를 냈습니다. (최대 1,000명)
선수들의 정보를 입력받고 금,은,동메달 선수의 기록만을 출력하고자 합니다.
그런데 사격대회 컴퓨터는 보안 문제로 인해, 네 칸의 배열만을 사용할 수 있습니다.
배열 네 칸만을 사용해서 금, 은, 동메달의 점수를 출력해주세요.
(삽입정렬로 풀어주세요.)*/

using namespace std;
struct Player {
	int score;
};
bool compare(Player& a, Player& b) {
	return a.score > b.score;
}
int main() {

	vector<Player> players = { {6},{35},{69},{73},{83},{95},{99} };

	sort(players.begin(), players.end(), compare);

	for (int i = 0; i < 3; i++) {
		cout << players[i].score << endl;
	}
	return 0;
}