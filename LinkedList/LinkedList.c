#include"LinkedList.h"

Node* initNode(int i){
	Node* node = (Node*)malloc(sizeof(node));
	node -> next = NULL;
	node -> key = i;
	return node;
}

Stack* init(int i){
	Stack* stack = (Stack*)malloc(sizeof(Stack));
	stack -> head = initNode(i);
	return stack;
}

void push(Stack* stack,int i){
	Node* tmp = stack -> head;
	stack->head = initNode(i);
	stack->head->next = tmp;
}

int pop(Stack* stack){
	Node* tmp = stack->head;

	if(tmp->next == NULL){
		printf("underflow\n");
		return -1;
	}

	stack->head = tmp->next;
	int ret = tmp->key;
	free(tmp);
	return ret;
}

void display(Stack* stack){
	if(stack == NULL){
		printf("wrong stack\n");
		return;
	}

	Node* tmp = stack -> head;
	while(tmp != NULL){
		printf("%d\n",tmp->key);
		tmp = tmp->next;
	}
}




