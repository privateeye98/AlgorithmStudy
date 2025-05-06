#include<iostream>
#include<vector>
#include<list>
#include<string>
#include<algorithm> // 알고리즘 정렬 사용

struct Player {
	int score;
	string name;
};

bool compare(Player& a, Player& b) {
	return a.score > b.score;
} //-> a가 b보다 클때 true 아니면 false

bool compare2(Player& a, Player& b) {
	return a.name > b.name;
	//-> 사전 순 정렬;
} //-> 이 방법이 귀찮으면 임시적으로 만들 수 있는 함수가 있는데 그것을 람다식이라함.
//이것은 무명함수라고함. 42번 줄부터 확인!


using namespace std;
int main() {
			
	char str[256] = "ABCDEF";
	string str2 = "ABCDEF";

	//이제 삽입정렬 버블정렬 등 알고리즘의 구현이 가능할것임.
	//시간이 걸리긴 하겠지만 ?
	//이젠 단순 함수를 사용해서 구현을 해보자.
	vector<int> vec = { 5,6,7,83,2,56,1,24,5,23,62,5232 };
	sort(vec.begin(), vec.end()); //-> 단순 정렬 알고리즘 내림차순
	sort(vec.begin(), vec.end(), greater<int>()); //-> 오름차순 정렬 알고리즘
	sort(vec.begin(), vec.end(), less<int>()); //-> 내림차순 알고리즘

	vector<Player> players = { {100, "Alice"}, {200, "Bob"}, {150, "Charlie"} };

	sort(players.begin(), players.end(), compare); //-> 사용자 정의 정렬법

	//람다식 사용법
	sort(players.begin(), players.end(), [](const Player& a, const Player& b) {
		return a.name < b.name;
		}
	); //-> 람다식 사용법 --> [] 뒤 전달인자와 함수내부의 값들이 들어감 (임시함수,무명함수)라고 많이함.
	//필요한  정보만 사용하니 퍼포먼스가 향상된다.
	// 어떤 방법으로 작성해도 모든 원소를 전부 순회하는경우는 람다식이 느릴수밖에 없다.
	// 익명함수의 특성상 외부의 캡쳐를 위해 캡처를 하는 시간제약이 있다.

	//for문을 돌지 않아도 내가 찾을수 있는 문법 find_if
	//find_if사용법
	find_if(players.begin(), players.end(), 
		[](const Player& a) {
		return a.name == "Alice";
		}); //-> 반환값이 std vector의 iterator형태로 반환된다.

	vector<Player>::iterator iter = find_if(players.begin(), players.end(),
		[](const Player& a) {
			return a.name == "Alice";
		});

	//-> 최대값의 인자를 찾고싶다?
	vector<int> :: iterator iter2 = max_element(vec.begin(), vec.end());
	return 0;
}