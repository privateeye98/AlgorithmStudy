#include<iostream>
//자식노드 출력해보기
using namespace std;
int main() {

	char value[10] = "DEFQZVM";
	int map[7][7] = {
		0,1,1,1,0,0,0,
		0,0,0,0,1,0,0,
		0,0,0,0,0,0,0,
		0,0,0,0,0,1,1,
		0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,
		0,0,0,0,0,0,0
	};

	int n = 0;
	cin >> n; // 입력

	for (int i = 0; i < 7; i++) {
		if (map[n][i] > 0)
		{
			cout << value[i] << endl; // 노드값을 출력하자
		}
	}

	return 0;

}