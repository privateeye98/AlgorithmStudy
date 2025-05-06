#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<map>

using namespace std;


//int name[256] = {};
//int n;
//
//int group[256] = {};
//int gCnt = 0;
//
//void insert(char a, char b) {
//	if (group[a] == 0) {
//		name[n++] = a;
//	}
//	if (group[b] == 0) {
//		name[n++] = b;
//	}
//	if (group[a] != 0 && group[b] == 0) {
//		group[b] = group[a];
//	}
//	else if (group[a] == 0 && group[b] != 0) {
//		group[a] = group[b];
//	}
//	else if (group[a] == 0 && group[b] == 0) {
//		gCnt++;
//		group[a] = gCnt;
//		group[b] = gCnt;
//	}
//	else {
//		int g = group[b];
//		for (int i = 0; i < n; i++) {
//			if (group[name[i]] == g) {
//				group[name[i]] = group[a];
//			}
//
//		}
//		
//	}
//}


char parent[1000001];

char getParent(char x) {
	if (parent[x] == 0)
		return x;

	int ret = getParent(parent[x]);
	parent[x] = ret;

	return ret;
}

void insert(char ch1, char ch2) {
	int a = getParent(ch1);
	int b = getParent(ch2);

	if (a != b)
		parent[b] = a;
}


int main()
{
	//�׷����� �����ϴ°��� �з��ϰų� �˻��ϴµ��� �־ �����ϴ�.
	//�׷쳢�� ������ ��Ű�� ū �����͸� �ٷ�⿡ �����ϴ�.
	
	////�׷� 1
	//insert('A', 'B');
	//insert('A', 'C');

	////�׷� 2
	//insert('D', 'Q');
	//insert('D', 'F');

	////����
	//insert('F', 'A');

	insert('A', 'G');
	insert('H', 'C');
	insert('A', 'H');
	insert('F', 'D');
	insert('A', 'F');
	return 0;
}