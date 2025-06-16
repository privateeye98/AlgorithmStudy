#include<stdio.h>


typedef struct Node {
	int data;
	struct Node* next;
	struct Node* prev;
} Node;
typedef struct list {
	Node* head;
	Node* tail;
	int size;
} list;

void intialize(list* list) {
	list->head = nullptr;
	list->tail = nullptr;
	list->size = 0;
}

void push_back(list)