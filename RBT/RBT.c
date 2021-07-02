#include"RBT.h"

//init node
Node* initNode(int i){
	Node* node = malloc(sizeof(Node));
	node -> key = i;
	node -> color = red;
	node -> p = NULL;
	node -> left = NULL;
	node -> right = NULL;
	return node;
}

//init RBT
RBT* initRBT(int i){
	RBT* tree = malloc(sizeof(RBT));
	tree -> root = initNode(i);
	tree -> root -> color = black;
	return tree;
}

//left rotate
void leftRotate(Node* node){
	Node* y = node -> right;
	node -> right = y -> left;
	y -> left -> p = node;
	y -> left = node;
	//node is left child
	if(node = node -> p -> left){
		node -> p -> left = y;
	} else{
		node -> p -> right = y;
	}
	y -> p = node -> p;
	node -> p = y;
}

//right rotate
void rightRotate(Node* node){
	Node* x = node -> left;
	node -> left = x -> right;
	x -> right -> p = node;
	if(node -> p -> left == node)
}

