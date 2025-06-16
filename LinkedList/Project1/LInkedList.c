#include<stdio.h>

//LinkedList Node

typedef struct node {
	struct node* next;
	struct node* prev;

	int data;
}node;

typedef struch list{
	node * head;
	node* tail;
	int size;
}list;
void intitalize(list* list)
