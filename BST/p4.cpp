#include<iostream>
#include<algorithm>
#include<vector>


using namespace std;
/* 창고에 여러 종류의 음료를 보관 하다보면, 음료수들이 섞이기 마련입니다.
쌓아둔 음료수들을 보기 좋게 정렬하려고 합니다.
음료수를 쌓을 수 있는 Line은 총 5개 입니다.
정렬이 필요한 Line의 숫자를 입력 받고, 그 Line에 해당하는 음료수들만 정렬 해야 합니다. (오름차순 정
렬)
정렬 할 Line은 2개입니다.
만약 0 3을 입력받는다면, 0번과 3번 Line을 각각 정렬하면 됩니다*/
int main() {
	vector<int> line[5]; // 음료수 5개를 담을 수 있는 벡터 배열
	for (int i = 0; i < 5; i++) {
		int drink; // Line의 음료수의 개수
		cout << i << "번 Line에 음료수의 개수를 입력하세요: ";
		cin >> drink;
		for (int j = 0; j < drink; j++) {
			int drink;
			cin >> drink;
			line[i].push_back(drink); // 음료수의 개수 만큼 음료수를 입력받아 Line에 저장
		}
	}
		int line1, line2; // 정렬할 Line의 번호
		cout << "정렬할 LINE의 번호를 입력하세요.";
		cin >> line1 >> line2; // 정렬할 Line의 번호를 입력받음
		sort(line[line1].begin(), line[line1].end()); //Line1정렬
		sort(line[line2].begin(), line[line2].end()); //Line2정렬
		for (int i = 0; i < 5; i++) {
			cout << i << "번 Line: ";
			for (int drink : line[i]) {
				cout << drink << " ";
			}
			cout << endl;
		}

	return 0;
}