#include<iostream>

using namespace std;

char Family[9] = { "ABHCDGEF" };
int map[8][8] = {
     { 0,1,1,1,0,0,0,0 }, // 0�� ����� �ڽ�: 1,2,3
    { 0,0,0,0,0,0,0,0 }, // 1�� ���(����)
    { 0,0,0,0,0,0,0,0 }, // 2�� ���(����)
    { 0,0,0,0,1,1,1,0 }, // 3�� ����� �ڽ�: 4,5,6
    { 0,0,0,0,0,0,0,1 }, // 4�� ����� �ڽ�: 7
    { 0,0,0,0,0,0,0,0 }, // 5�� ���(����)
    { 0,0,0,0,0,0,0,0 }, // 6�� ���(����)
    { 0,0,0,0,0,0,0,0 }  // 7�� ���(����)
};


int main() {
    int Find = -1;
    char userinput;
    cout << "��带 �Է����ּ���." << endl;  
    cin >> userinput;



    for(int i = 0; i < 8; i++){ //y��
    for (int j = 0; j < 8; j++) { //x��
        if (map[i][j] == 1 && Family[j] == userinput) {
            Find = i; // �Է��� ����� �θ� ã��
            break;
        }
    }
    }
    for (int k = 0; k < 8; k++) {
        if (map[Find][k] == 1) {
            if (Family[k] == userinput)
            {
				continue; // �Է��� ���� ������ continue
            }
            cout << Family[k] << ""; // ���� ��� ���
        }
    }


	return 0;
}