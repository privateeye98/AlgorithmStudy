#include <iostream>
#include <vector>


using namespace std;

int map[9] = { 0 , 3 , 4 ,2 ,4 ,1 , 0 , 3 };

void SWAP(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}

void run1D(int now) {
	if (now >= 9 || map[now] == 0)
		return;
	cout << map[now] << " ";

	run1D(now * 2);
	run1D(now * 2 + 1);
}
int main() {
	int input[2];

	cout << "배열의 위치를 적어주세요";
	cin >> input[0] >> input[1];

	SWAP(map[input[0]],input[1]);
	
	run1D(1);
	

	return 0;
}