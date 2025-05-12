#include<iostream>

#include<queue>

using namespace std;
//�ּ����� ����
int heap[256] = {};
int hn = 0;
void push(int data) {
	heap[++hn] = data; // �����͸� 1������ �ֱ����� ���� 1�� ��� ��Ų �� ������
	int now = hn; // ���� �迭�� ���� ��ġ
	int parent = 0; // �θ��� ��ġ

	while (true) {
		parent = now / 2; // �θ��� index = �ڽĳ���� index/2 �������ڸ� �θ� 1�̰� �ڽĳ��� 2,3���ٵ�, �� 2�� ���������� 1�� ����

		if (now == 1)
			break; // 1������ϰ�쿣 �θ� ������ �����Ƿ� ����

		if (heap[parent] < heap[now])
			break; //now�� �θ𺸴� ��ų� Ŭ��� swap�� �ʿ䰡 ����.

		swap(heap[parent], heap[now]); // ���� �ƴ϶�� swap�� ��Ű��
		now = parent; //�θ��� index�� now�� �����Ͽ� �ٽ� �񱳽���.
		// ������ ���忣 break;���� ���⶧���� true�� ��� ����.

		// ���� �θ� 1�̶�� while���� �����

	}


}
int pop() {

	int backup = heap[1]; //1�� ����� ���� backup�� ����
	heap[1] = heap[hn]; // ������ ����� ���� 1�� ��忡 ����
	heap[hn--] = 0; // ������ ����� ���� 0���� �ʱ�ȭ

	int now = 1; // ���� ��ġ
	int son = 0; // �ڽĳ���� ��ġ

	while (true) {
		son = now * 2;
		if (son + 1 <= hn && heap[son] > heap[son + 1]) // �ڽĳ�尡 2���ϰ�� �������� ����
			son++;
	
		if (son > hn || heap[son] >= heap[now])  // �ڽĳ�尡 ���ų� �ڽĳ�尡 �θ𺸴� Ŭ ��� ����
			break;

		swap(heap[now], heap[son]); // �ڽĳ�尡 �θ𺸴� ������� swap
		
	}
	return backup;
}
int main() {
	// -- �� ����
	push(3);
	push(5);
	push(2);
	push(4);
	push(1);
	push(6);

	// -- �� ����

	cout << pop() << endl;
	cout << pop() << endl;
	cout << pop() << endl;
	cout << pop() << endl;
	cout << pop() << endl;
	cout << pop() << endl;
	return 0;
}