#include<iostream>
#include<algorithm>
#include<vector>


using namespace std;
/* â�� ���� ������ ���Ḧ ���� �ϴٺ���, ��������� ���̱� �����Դϴ�.
�׾Ƶ� ��������� ���� ���� �����Ϸ��� �մϴ�.
������� ���� �� �ִ� Line�� �� 5�� �Դϴ�.
������ �ʿ��� Line�� ���ڸ� �Է� �ް�, �� Line�� �ش��ϴ� ������鸸 ���� �ؾ� �մϴ�. (�������� ��
��)
���� �� Line�� 2���Դϴ�.
���� 0 3�� �Է¹޴´ٸ�, 0���� 3�� Line�� ���� �����ϸ� �˴ϴ�*/
int main() {
	vector<int> line[5]; // ����� 5���� ���� �� �ִ� ���� �迭
	for (int i = 0; i < 5; i++) {
		int drink; // Line�� ������� ����
		cout << i << "�� Line�� ������� ������ �Է��ϼ���: ";
		cin >> drink;
		for (int j = 0; j < drink; j++) {
			int drink;
			cin >> drink;
			line[i].push_back(drink); // ������� ���� ��ŭ ������� �Է¹޾� Line�� ����
		}
	}
		int line1, line2; // ������ Line�� ��ȣ
		cout << "������ LINE�� ��ȣ�� �Է��ϼ���.";
		cin >> line1 >> line2; // ������ Line�� ��ȣ�� �Է¹���
		sort(line[line1].begin(), line[line1].end()); //Line1����
		sort(line[line2].begin(), line[line2].end()); //Line2����
		for (int i = 0; i < 5; i++) {
			cout << i << "�� Line: ";
			for (int drink : line[i]) {
				cout << drink << " ";
			}
			cout << endl;
		}

	return 0;
}