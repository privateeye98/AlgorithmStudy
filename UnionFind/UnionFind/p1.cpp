#include<iostream>


using namespace std;
char parent[1000001];
int check1[256];

bool check(char A,char B) {
	check1[A]++;
	if (check1[A] > 1)
		return true;
	else
		return false;
}
char getParent(char x) {
	if (parent[x] == 0)
		return x;
	int ret = getParent(parent[x]);
	parent[x] = ret;

	return ret;
}

void insert(char A, char B) {
	int a = getParent(A);
	int b = getParent(B);

	if (a != b)
		parent[b] = a;
}

int main() {
	char inputA, inputB;

	for (int i = 0; i < 4; i++) {
		cin >> inputA >> inputB;
		insert(inputA, inputB);
		
		if (check(inputA,inputB) == true) {
			cout << "¹ß°ß";
			break;
		}	
	}
	
	return 0;
}