#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>  // std::setw

// DP 테이블을 출력하는 헬퍼 함수
void printTable(const std::vector<std::vector<int>>& K, int W) {
    int n = K.size() - 1;
    // 1) 헤더: w = 0,1,2...W
    std::cout << std::setw(4) << "i\\w";
    for (int w = 0; w <= W; ++w) {
        std::cout << std::setw(5) << w;
    }
    std::cout << "\n";

    // 2) 각 i 행 출력
    for (int i = 0; i <= n; ++i) {
        std::cout << std::setw(4) << i;
        for (int w = 0; w <= W; ++w) {
            std::cout << std::setw(5) << K[i][w];
        }
        std::cout << "\n";
    }
    std::cout << std::endl;
}

// Returns maximum value for capacity W using first n items
int knapSackDebug(int W,
    const std::vector<int>& wt,
    const std::vector<int>& val) {
    int n = wt.size();
    // DP 테이블: (n+1) x (W+1), all 초기값 0
    std::vector<std::vector<int>> K(n + 1, std::vector<int>(W + 1, 0));

    for (int i = 1; i <= n; ++i) {
        for (int w = 1; w <= W; ++w) {
            if (wt[i - 1] <= w) {
                K[i][w] = std::max(
                    val[i - 1] + K[i - 1][w - wt[i - 1]],
                    K[i - 1][w]
                );
            }
            else {
                K[i][w] = K[i - 1][w];
            }
        }
    }

    // 디버깅: 테이블 전체 출력
    printTable(K, W);

    return K[n][W];
}

int main() {
    std::vector<int> val = { 60, 80, 100, 115, 120, 150 };
    std::vector<int> wt = { 10, 20, 30, 25, 15, 40 };
    int W = 100;

    int maxValue = knapSackDebug(W, wt, val);
    std::cout << "Maximum value in the Knapsack: "
        << maxValue << "\n";
    return 0;
}
