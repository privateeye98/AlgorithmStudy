#include<iostream>
using namespace std;
char map1D[7] = " TBECD";
//����Լ���	1���� �迭�� ��ȸ�ϴ� ����
void run1D(int now) {
	if (now >= 7 || map1D[now == ' '])
		return; // �������� now�� �迭�� ũ�⸦ �Ѿ�ų� map[now]�� ����ְ��
	cout << map1D[now]; //������ ���, ������ 1�̱⶧���� map1D[1]���� ����
	run1D(now * 2); // �θ�������� ���� ��� Ž��
	run1D(now * 2 + 1); // �θ� �������� ������ ��带 Ž��
	// 
}

int main() {


	run1D(1); // 1�������� ���� 

	return 0;
}