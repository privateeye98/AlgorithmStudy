#include<iostream>
#include<vector>
#include<set>

using namespace std;
int parent[256];
vector<char> appeared;


char getParent(char x) {
	if (parent[x] == 0) {
		return x;
	}

	int ret = getParent(parent[x]);
	parent[x] = ret;

	return ret;

}

void insert(char ch1, char ch2) {
	appeared.push_back(ch1);
	appeared.push_back(ch2);
	
	int a = getParent(ch1);
	int b = getParent(ch2);

	if (a != b) {
		parent[b] = a;
	}
}

int main() {
	//그룹 1
	insert('A', 'B');
	insert('A', 'C');
	//그룹 2
	insert('E', 'D');
	insert('E', 'F');
	//그룹 3
	insert('I', 'J');
	//그룹 4
	insert('H', 'G');


	int input;
	char input1, input2;
	cin >> input;
	for (int i = 0; i < input; i++) {
		cin >> input1 >> input2;
		insert(input1, input2);
	}
	set<char> roots;
	for (char ch : appeared)
		roots.insert(getParent(ch));

	cout << roots.size();


	return 0;
}