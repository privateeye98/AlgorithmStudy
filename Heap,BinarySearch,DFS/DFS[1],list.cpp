#include<iostream>
using namespace std;
char map1D[7] = " TBECD";
//재귀함수로	1차원 배열을 순회하는 예제
void run1D(int now) {
	if (now >= 7 || map1D[now == ' '])
		return; // 종료조건 now가 배열의 크기를 넘어서거나 map[now]가 비어있경우
	cout << map1D[now]; //현재노드 출력, 시작은 1이기때문에 map1D[1]부터 시작
	run1D(now * 2); // 부모기준으로 왼쪽 노드 탐색
	run1D(now * 2 + 1); // 부모를 기준으로 오른쪽 노드를 탐색
	// 
}

int main() {


	run1D(1); // 1번쨰부터 시작 

	return 0;
}