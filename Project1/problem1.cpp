#include<iostream>

#include<vector>	
#include<algorithm>

using namespace std;
/*  문제 1번
숫자와 문자가 한 쌍인 n개 Set을 구조체배열에 입력받으세요. (1 <= n <= 100)
우선순위에 맞춰 삽입정렬로 정렬 후 출력하면 됩니다.
[우선순위]
1. 작은 숫자가 더 앞에 있어야 하며 (오름차순)
2. 같은 숫자인 경우, 더 작은 문자가 앞에 배치되어야 합니다.  */
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
