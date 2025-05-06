#include<iostream>
#include<vector>
#include<algorithm>


using namespace std;

/*어느 국가에서, 실명제 국회의원 투표가 시작되었습니다.
여러 사람들이 N명의 국회의원들에게 투표를 합니다. (1 <= N <= 100)
가장 투표를 많이 받은 국회의원을 찾아주세요.
(같은 표를 받았다면, 번호가 더 빠른 사람이 당선됩니다.)
국회의원들은 숫자로 나타내고, 사람들은 투표할 숫자와 이름으로 입력됩니다.
당선된 국회의원이 누구에게 투표를 받았는지를 출력해주세요.
*/
struct Human {
	int voteNum; //국회의원 번호
	string votername; // 투표한사람 이름
};


int main() {
	vector<Human> humans;
	vector<int> votes; //투표수
	int n;  //국회의원수
	cin >> n;  // 국회의원수 
	int m; // 투표인 수
	cin >> m; // 투표인 수
	votes.resize(n); // 국회의원 수 만큼 크기 조정
	humans.resize(m); // 투표인 수 만큼 크기 조정
	vector<string> votedby; // 투표한 사람 이름 저장


	for (int i = 0; i < m; i++) {
		cin >> humans[i].voteNum >> humans[i].votername; // 투표인 정보 입력
		votes[humans[i].voteNum]++; // 투표수 증가
		votedby.push_back(humans[i].votername); // 투표한 사람 이름 저장
	}
	int maxVotes = 0; // 최대 투표수
	int winner = 0; // 당선자 번호

	for (int i = 0; i < n; i++) {
		if (votes[i] > maxVotes) {
			maxVotes = votes[i];// 최대 투표수 갱신
			winner = i;
		}
	}
	cout << "가장 많이 투표받은 국회의원 : " << winner << endl;
	cout << "투표한 사람들" << endl;
	for (int i = 0; i < m; i++) {
		if (humans[i].voteNum == winner) {
			cout << humans[i].votername << endl;
		}
	}

	return 0;
}
