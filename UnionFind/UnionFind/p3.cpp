#include<iostream>
#include<list>
#include<vector>
#include<string>
#include<map>


using namespace std;
int bst[256] = { 0 };
void insert(int data) {
	int idx = 1;
	while (1) {
		if (bst[idx] == 0) {
			bst[idx] = data;
			break;
		}
		else if(bst[idx] > data){
			idx = idx * 2;
		}
		else {
			idx = idx * 2 + 1;
		}
	}
}
void searchRecursive(int data, int now) {
	int level = 0;
	if (bst[now] == 0) {
		printf("Not Found\n");
		return;
	}
	if (bst[now] == data) {
		printf("Found\n");
		printf("%d", level);
		return;
	}
	if (bst[now] > data) {
		level++;
		searchRecursive(data, now * 2);
	}
	else
	{
		level++;
		searchRecursive(data, now * 2 + 1);
	}
}
int main() {
	//데이터를 넣기
	insert(15);
	insert(7);
	insert(8);
	insert(19);
	insert(17);
	insert(25);
	insert(16);
	insert(18);

	int target;

	for (int i = 0; i < 4; i++) {
		cin >> target;
		searchRecursive(target, 1);
	}
	return 0;
}