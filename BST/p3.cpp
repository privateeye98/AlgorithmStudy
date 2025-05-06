#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
/*숫자 폭탄의 개수 N을 입력 받고, N개의 폭탄을 입력 받습니다.
이 폭탄을 일렬로 쌓아 주세요.
그러다 같은 숫자 폭탄이 3개가 연속으로 쌓인다면, 한꺼번에 터집니다.
폭탄이 모두 쌓이고 난 뒤에, 남아 있는 숫자폭탄들을
오름차순으로 정렬해 주세요.
만약 17개의 폭탄을 아래와 같이 입력받았다면,
5 4 5 1 1 1 1 1 2 2 2 3 3 3 3 8 1
남은 폭탄은 5 4 5 1 1 3 8 1 입니다.
이제 정렬 후 출력하면 됩니다.
출력결과 : 1 1 1 3 4 5 5 8
*/
struct Bomb {
	int num;
};
bool compare(Bomb& a, Bomb& b) {
	return a.num < b.num;
}
int main() {
	vector<Bomb> bombs;
	int n;
	cout << "폭탄의 개수 N을 입력하세요: " << endl;
	cin >> n;
	Bomb temp;


 	for (int i = 0; i < n; i++) {
		cout << "폭탄울 입력해주세요." << endl;
		cin >> temp.num;
		bombs.push_back(temp);
		int sz = bombs.size();

			if (sz >= 3) {
				if (bombs[sz - 1].num == bombs[sz - 2].num && bombs[sz - 2].num == bombs[0].num) {
					bombs.pop_back();
					bombs.pop_back();
					bombs.pop_back();


					sort(bombs.begin(), bombs.end(), compare);
			}
		}
	}
	


	return 0;
}