#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
/*���� ��ź�� ���� N�� �Է� �ް�, N���� ��ź�� �Է� �޽��ϴ�.
�� ��ź�� �Ϸķ� �׾� �ּ���.
�׷��� ���� ���� ��ź�� 3���� �������� ���δٸ�, �Ѳ����� �����ϴ�.
��ź�� ��� ���̰� �� �ڿ�, ���� �ִ� ������ź����
������������ ������ �ּ���.
���� 17���� ��ź�� �Ʒ��� ���� �Է¹޾Ҵٸ�,
5 4 5 1 1 1 1 1 2 2 2 3 3 3 3 8 1
���� ��ź�� 5 4 5 1 1 3 8 1 �Դϴ�.
���� ���� �� ����ϸ� �˴ϴ�.
��°�� : 1 1 1 3 4 5 5 8
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
	cout << "��ź�� ���� N�� �Է��ϼ���: " << endl;
	cin >> n;
	Bomb temp;


 	for (int i = 0; i < n; i++) {
		cout << "��ź�� �Է����ּ���." << endl;
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