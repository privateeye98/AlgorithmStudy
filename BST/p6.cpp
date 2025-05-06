#include<iostream>
#include<vector>
#include<algorithm>


using namespace std;

/*��� ��������, �Ǹ��� ��ȸ�ǿ� ��ǥ�� ���۵Ǿ����ϴ�.
���� ������� N���� ��ȸ�ǿ��鿡�� ��ǥ�� �մϴ�. (1 <= N <= 100)
���� ��ǥ�� ���� ���� ��ȸ�ǿ��� ã���ּ���.
(���� ǥ�� �޾Ҵٸ�, ��ȣ�� �� ���� ����� �缱�˴ϴ�.)
��ȸ�ǿ����� ���ڷ� ��Ÿ����, ������� ��ǥ�� ���ڿ� �̸����� �Էµ˴ϴ�.
�缱�� ��ȸ�ǿ��� �������� ��ǥ�� �޾Ҵ����� ������ּ���.
*/
struct Human {
	int voteNum; //��ȸ�ǿ� ��ȣ
	string votername; // ��ǥ�ѻ�� �̸�
};


int main() {
	vector<Human> humans;
	vector<int> votes; //��ǥ��
	int n;  //��ȸ�ǿ���
	cin >> n;  // ��ȸ�ǿ��� 
	int m; // ��ǥ�� ��
	cin >> m; // ��ǥ�� ��
	votes.resize(n); // ��ȸ�ǿ� �� ��ŭ ũ�� ����
	humans.resize(m); // ��ǥ�� �� ��ŭ ũ�� ����
	vector<string> votedby; // ��ǥ�� ��� �̸� ����


	for (int i = 0; i < m; i++) {
		cin >> humans[i].voteNum >> humans[i].votername; // ��ǥ�� ���� �Է�
		votes[humans[i].voteNum]++; // ��ǥ�� ����
		votedby.push_back(humans[i].votername); // ��ǥ�� ��� �̸� ����
	}
	int maxVotes = 0; // �ִ� ��ǥ��
	int winner = 0; // �缱�� ��ȣ

	for (int i = 0; i < n; i++) {
		if (votes[i] > maxVotes) {
			maxVotes = votes[i];// �ִ� ��ǥ�� ����
			winner = i;
		}
	}
	cout << "���� ���� ��ǥ���� ��ȸ�ǿ� : " << winner << endl;
	cout << "��ǥ�� �����" << endl;
	for (int i = 0; i < m; i++) {
		if (humans[i].voteNum == winner) {
			cout << humans[i].votername << endl;
		}
	}

	return 0;
}
