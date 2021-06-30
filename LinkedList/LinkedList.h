#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
	int key;
	struct Node* next;
}Node;

typedef struct Stack{
	Node* head;
}Stack;

//init node and give it a key
Node* initNode(int i);

//init Stack and it start by a node
Stack* init(int i);

//push
void push(Stack* stack,int i);

//pop
int pop(Stack* stack);

//display
void display(Stack* stack);
