#include<iostream>

#include<queue>

using namespace std;
//최소힙을 구성
int heap[256] = {};
int hn = 0;
void push(int data) {
	heap[++hn] = data; // 데이터를 1번부터 넣기위해 먼저 1을 상승 시킨 후 대입함
	int now = hn; // 나의 배열의 현재 위치
	int parent = 0; // 부모의 위치

	while (true) {
		parent = now / 2; // 부모의 index = 자식노드의 index/2 예를들자면 부모가 1이고 자식노드는 2,3일텐데, 각 2로 나눠버리면 1이 나옴

		if (now == 1)
			break; // 1번노드일경우엔 부모가 있을수 없으므로 종료

		if (heap[parent] < heap[now])
			break; //now가 부모보다 깊거나 클경우 swap할 필요가 없다.

		swap(heap[parent], heap[now]); // 만약 아니라면 swap을 시키자
		now = parent; //부모의 index를 now에 대입하여 다시 비교시작.
		// 마지막 문장엔 break;문이 없기때문에 true로 계속 비교함.

		// 만약 부모가 1이라면 while문이 종료됨

	}


}
int pop() {

	int backup = heap[1]; //1번 노드의 값을 backup에 저장
	heap[1] = heap[hn]; // 마지막 노드의 값을 1번 노드에 대입
	heap[hn--] = 0; // 마지막 노드의 값을 0으로 초기화

	int now = 1; // 현재 위치
	int son = 0; // 자식노드의 위치

	while (true) {
		son = now * 2;
		if (son + 1 <= hn && heap[son] > heap[son + 1]) // 자식노드가 2개일경우 작은값을 선택
			son++;
	
		if (son > hn || heap[son] >= heap[now])  // 자식노드가 없거나 자식노드가 부모보다 클 경우 종료
			break;

		swap(heap[now], heap[son]); // 자식노드가 부모보다 작을경우 swap
		
	}
	return backup;
}
int main() {
	// -- 값 대입
	push(3);
	push(5);
	push(2);
	push(4);
	push(1);
	push(6);

	// -- 값 빼기

	cout << pop() << endl;
	cout << pop() << endl;
	cout << pop() << endl;
	cout << pop() << endl;
	cout << pop() << endl;
	cout << pop() << endl;
	return 0;
}