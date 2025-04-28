#include<iostream>
#include<vector>
#include<algorithm>

/*����ó �ۿ� ���� ����� ������� �մϴ�.
���ڿ� ���� N�� �Է� �ް�, N���� �̸��� �Է¹޾��ּ���.
�׸��� �Ʒ��� ���� �������� ���� �� ����� �ּ���. 
[���� �켱����]
1. ���� ������ ���� (��������)
2. ���� ������ ���� (��������)*/
using namespace std;
struct name {
	string name;
};

int main() {
	int n;
	vector<name> names;
	cin >> n;

	names.resize(n);

	for (int i = 0; i < n; i++) {
		cin >> names[i].name;
	}

	sort(names.begin(), names.end(), 
		[](const name& a, const name& b) {
			if (a.name.length() != b.name.length())
				return a.name.length() < b.name.length();
		return a.name < b.name;
		});

	cout << "Sorted names:" << endl;
	for (int i = 0; i < n; i++) {
		cout << names[i].name << endl;
	}

	return 0;
}