#include<iostream>
#include<algorithm>
using namespace std;



char Node[10] = { " ADFZCGQH" };
char input[2];
int related[2];
int findindex = 0;

// �θ���� �ڽĳ���� ���踦 ã�� �Լ�
void run2D(int now) {


	if (now >= 10 || findindex >= 2) // ��������
		return;

		for(int i = 0; i < 2; i ++){
			if (input[i] == Node[now]) {
				related[findindex++] = now; // ã�� ����� index�� related�� ����
				if (findindex >= 2) return;
			}
		}

	run2D(now * 2); // ���� �ڽĳ�� Ž��
	run2D(now * 2 + 1); // ������ �ڽĳ�� Ž��


}


int main() {
	for (int i = 0; i < 2; i++) {
		cin >> input[i];//�Է�
	}
	run2D(1);

	if (related[0] == (related[1] / 2) || related[1] == (related[0] / 2))
		cout << "�θ��ڽİ���";
	else {
		cout << "�θ��ڽİ��� �ƴ�";
	}

	return 0;
}
