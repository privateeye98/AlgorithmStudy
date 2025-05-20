#include<iostream>
#include<algorithm>
using namespace std;



char Node[10] = { " ADFZCGQH" };
char input[2];
int related[2];
int findindex = 0;

// 부모노드와 자식노드의 관계를 찾는 함수
void run2D(int now) {


	if (now >= 10 || findindex >= 2) // 종료조건
		return;

		for(int i = 0; i < 2; i ++){
			if (input[i] == Node[now]) {
				related[findindex++] = now; // 찾는 노드의 index를 related에 저장
				if (findindex >= 2) return;
			}
		}

	run2D(now * 2); // 왼쪽 자식노드 탐색
	run2D(now * 2 + 1); // 오른쪽 자식노드 탐색


}


int main() {
	for (int i = 0; i < 2; i++) {
		cin >> input[i];//입력
	}
	run2D(1);

	if (related[0] == (related[1] / 2) || related[1] == (related[0] / 2))
		cout << "부모자식관계";
	else {
		cout << "부모자식관계 아님";
	}

	return 0;
}
