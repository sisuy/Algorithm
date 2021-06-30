#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
	int key;
	struct Node* left_children;
	struct Node* right_sibilings;
}Node;

typedef struct LCRS{
	Node* root;
}LCRS;

//init Node
Node* initNode(int i);

//init LCRS,and set the root key
LCRS* initLCRS(int i);

//traversal LCRS
void traversalLCRS(Node* node);



