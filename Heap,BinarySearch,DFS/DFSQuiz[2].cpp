#include<iostream>

using namespace std;

char Family[9] = { "ABHCDGEF" };
int map[8][8] = {
     { 0,1,1,1,0,0,0,0 }, // 0번 노드의 자식: 1,2,3
    { 0,0,0,0,0,0,0,0 }, // 1번 노드(리프)
    { 0,0,0,0,0,0,0,0 }, // 2번 노드(리프)
    { 0,0,0,0,1,1,1,0 }, // 3번 노드의 자식: 4,5,6
    { 0,0,0,0,0,0,0,1 }, // 4번 노드의 자식: 7
    { 0,0,0,0,0,0,0,0 }, // 5번 노드(리프)
    { 0,0,0,0,0,0,0,0 }, // 6번 노드(리프)
    { 0,0,0,0,0,0,0,0 }  // 7번 노드(리프)
};


int main() {
    int Find = -1;
    char userinput;
    cout << "노드를 입력해주세요." << endl;  
    cin >> userinput;



    for(int i = 0; i < 8; i++){ //y축
    for (int j = 0; j < 8; j++) { //x축
        if (map[i][j] == 1 && Family[j] == userinput) {
            Find = i; // 입력한 노드의 부모 찾기
            break;
        }
    }
    }
    for (int k = 0; k < 8; k++) {
        if (map[Find][k] == 1) {
            if (Family[k] == userinput)
            {
				continue; // 입력한 노드와 같으면 continue
            }
            cout << Family[k] << ""; // 형제 노드 출력
        }
    }


	return 0;
}