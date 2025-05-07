#include<iostream>
int bst[256];


using namespace std;
void insert(int data) {
	int idx = 1;
	while (1) {
		if (bst[idx] == 0) {
			bst[idx] = data;
			break;
		}
		else if (bst[idx] > data) {
			idx = idx * 2;
		}
		else {
			idx = idx * 2 + 1;
		}
	}
}

void search(int data) {
	int idx = 1;
	while (1) {
		if (bst[idx] == data) {
			printf("finddata\n");
		}
		else if (bst[idx] > data) {
			idx = idx * 2;
		}
		else {
			idx = idx * 2 + 1;
		}
	}
}

int main() {
	int n;
	for (int i = 0; i < 6; i++) {
		cin >> n;
		insert(n);
	}

	return 0;
}