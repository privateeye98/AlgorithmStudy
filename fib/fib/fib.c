#include<stdio.h>

int fib(int num) {
	
	if (num == 0) {
		return 0;
	}
	if (num == 1) return 1;
	return fib(num - 1) + fib(num - 2);
}

int main() {
	int n;
	char ans;
	do {
		printf("수를 입력하세요.");
		scanf_s("%d", &n);

		printf("fib(n) = %d\n", fib(n));

		printf("프로그램을 종료할까요?(y/n) : ");
		scanf_s(" %c", &ans, 1);

		if (ans == 'n' || ans == 'N'); {
			printf("피보나치 수를 다시 알아봅시다.\n");
		}

	} while (ans == 'n' || ans == 'N');
	

	return 0;
}