#include<iostream>
#include<vector>
#include<algorithm>

/*연락처 앱에 정렬 기능을 만드려고 합니다.
문자열 개수 N을 입력 받고, N명의 이름을 입력받아주세요.
그리고 아래와 같은 조건으로 정렬 후 출력해 주세요. 
[정렬 우선순위]
1. 길이 순으로 정렬 (오름차순)
2. 사전 순으로 정렬 (오름차순)*/
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