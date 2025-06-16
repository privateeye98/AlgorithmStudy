#include <stdio.h>

#define INF 9999   // 충분히 큰 값
#define N 6        // 동전 종류 개수 (예: 700, 300, 60, 20, 5, 1)
#define A 2353     // 거스름돈으로 만들고자 하는 금액

void display(int arr[A + 1]);
void coinChange(int d[N + 1], int C[A + 1], int S[A + 1]);
void coinSet(int d[N + 1], int S[A + 1]);

int main(void) {
    // 인덱스 1부터 실제 동전 값을 저장. 0번은 더미용
    int d[N + 1] = { 0, 700, 300, 60, 20, 5, 1 };

    int C[A + 1];  // 금액 0..A마다 “최소 동전 개수”를 저장할 배열
    int S[A + 1];  // 금액 0..A마다 “마지막에 쓴 동전 인덱스”를 저장할 배열

    coinChange(d, C, S);

    printf("\nC[p] (0~%d까지 최소 동전 개수)\n", A);
    display(C);

    printf("\nS[p] (0~%d까지 마지막에 선택된 동전 인덱스)\n", A);
    display(S);

    printf("\nMin. no. of coins required to make change for %d = %d\n", A, C[A]);

    printf("\nCoin Set (실제로 사용된 동전들)\n");
    coinSet(d, S);

    return 0;
}

void coinChange(int d[N + 1], int C[A + 1], int S[A + 1]) {
    int i, p, min, cnt, coinIdx;

    C[0] = 0;
    S[0] = 0;

    // 금액 p = 1 .. A 순서로 DP 채우기
    for (p = 1; p <= A; p++) {
        min = INF;
        coinIdx = 0;  // 안전을 위해 초기화

        // 동전 종류 1..N을 하나씩 시도
        for (i = 1; i <= N; i++) {
            if (d[i] <= p) {
                cnt = C[p - d[i]] + 1;  // “(p - d[i])를 만들 때 동전 개수” + 1개를 썼을 때
                if (cnt < min) {
                    min = cnt;
                    coinIdx = i;      // 금액 p를 얻기 위해 마지막으로 쓴 동전 인덱스
                }
            }
        }
        C[p] = min;
        S[p] = coinIdx;
    }
}

void coinSet(int d[N + 1], int S[A + 1]) {
    int a = A;
    while (a > 0) {
        int idx = S[a];          // a원을 만들 때 마지막으로 쓴 동전의 인덱스
        printf("사용한 동전 : %d원\n", d[idx]);
        a = a - d[idx];          // 남은 금액을 줄여가며 역추적
    }
}

void display(int arr[A + 1]) {
    for (int i = 0; i <= A; i++) {
        printf("%5d ", arr[i]);
        if (i % 10 == 9)         // 보기 편하도록 10개씩 끊어서 줄 바꿈
            printf("\n");
    }
    printf("\n");
}
