#include <iostream>
#include <vector>
#include <algorithm>
// 배낭문제 DP해결

using namespace std;

int knapSack(int W, const vector<int>& wt, const vector<int>& val) {
	int n = wt.size(); // 사이즈 정의

	vector<vector<int>> K(n + 1, vector<int>(W + 1, 0)); // 배열초기화

	for (int i = 1; i <= n; ++i) { //->[i]와[w]의 사이값 ?
		for (int w = 1; w <= W; ++w) { // 가방의 용량 증가시킴
			if (wt[i - 1] <= w) {
				K[i][w] = max(val[i - 1] + K[i - 1][w - wt[i - 1]], K[i - 1][w]);

			}
			else {
				K[i][w] = K[i - 1][w];
			}
		}
	}
		return K[n][W];
}

int main() {
	vector<int> val = { 60,80,100,115,120,150 }; //가치 
	vector<int> wt = { 10,20,30,25,15,40 }; // 무게

	int W = 100; // 배낭의 크기

	int maxValue = knapSack(W, wt, val);
	std::cout << "Maximum value in the Knapsack: " << maxValue << "\n";

	return 0;
}