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
		printf("���� �Է��ϼ���.");
		scanf_s("%d", &n);

		printf("fib(n) = %d\n", fib(n));

		printf("���α׷��� �����ұ��?(y/n) : ");
		scanf_s(" %c", &ans, 1);

		if (ans == 'n' || ans == 'N'); {
			printf("�Ǻ���ġ ���� �ٽ� �˾ƺ��ô�.\n");
		}

	} while (ans == 'n' || ans == 'N');
	

	return 0;
}