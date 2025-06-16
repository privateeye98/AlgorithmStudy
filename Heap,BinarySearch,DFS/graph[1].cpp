#include<iostream>

using namespace std;
//부모노드 출력해보기
int main() {
	char map[15] = " ERWG RW    K ";

	int n = 0;
	cin >> n;

	cout << map[n / 2] << endl; //입력받은 숫자의 부모를 출력해보자.
	return 0;
}