#include<iostream>
#include<vector>
#include<list>
#include<string>
#include<algorithm> // �˰��� ���� ���

struct Player {
	int score;
	string name;
};

bool compare(Player& a, Player& b) {
	return a.score > b.score;
} //-> a�� b���� Ŭ�� true �ƴϸ� false

bool compare2(Player& a, Player& b) {
	return a.name > b.name;
	//-> ���� �� ����;
} //-> �� ����� �������� �ӽ������� ���� �� �ִ� �Լ��� �ִµ� �װ��� ���ٽ��̶���.
//�̰��� �����Լ������. 42�� �ٺ��� Ȯ��!


using namespace std;
int main() {
			
	char str[256] = "ABCDEF";
	string str2 = "ABCDEF";

	//���� �������� �������� �� �˰����� ������ �����Ұ���.
	//�ð��� �ɸ��� �ϰ����� ?
	//���� �ܼ� �Լ��� ����ؼ� ������ �غ���.
	vector<int> vec = { 5,6,7,83,2,56,1,24,5,23,62,5232 };
	sort(vec.begin(), vec.end()); //-> �ܼ� ���� �˰��� ��������
	sort(vec.begin(), vec.end(), greater<int>()); //-> �������� ���� �˰���
	sort(vec.begin(), vec.end(), less<int>()); //-> �������� �˰���

	vector<Player> players = { {100, "Alice"}, {200, "Bob"}, {150, "Charlie"} };

	sort(players.begin(), players.end(), compare); //-> ����� ���� ���Ĺ�

	//���ٽ� ����
	sort(players.begin(), players.end(), [](const Player& a, const Player& b) {
		return a.name < b.name;
		}
	); //-> ���ٽ� ���� --> [] �� �������ڿ� �Լ������� ������ �� (�ӽ��Լ�,�����Լ�)��� ������.
	//�ʿ���  ������ ����ϴ� �����ս��� ���ȴ�.
	// � ������� �ۼ��ص� ��� ���Ҹ� ���� ��ȸ�ϴ°��� ���ٽ��� �������ۿ� ����.
	// �͸��Լ��� Ư���� �ܺ��� ĸ�ĸ� ���� ĸó�� �ϴ� �ð������� �ִ�.

	//for���� ���� �ʾƵ� ���� ã���� �ִ� ���� find_if
	//find_if����
	find_if(players.begin(), players.end(), 
		[](const Player& a) {
		return a.name == "Alice";
		}); //-> ��ȯ���� std vector�� iterator���·� ��ȯ�ȴ�.

	vector<Player>::iterator iter = find_if(players.begin(), players.end(),
		[](const Player& a) {
			return a.name == "Alice";
		});

	//-> �ִ밪�� ���ڸ� ã��ʹ�?
	vector<int> :: iterator iter2 = max_element(vec.begin(), vec.end());
	return 0;
}