#include"LCRS.h"


//init Node
Node* initNode(int i){
	Node* node  = (Node*)malloc(sizeof(Node));
	node -> key = i;
	node -> left_children = NULL;
	node -> right_sibilings = NULL;
	return node;
}

//init LCRS,and set the root key
LCRS* initLCRS(int i){
	LCRS* tree = (LCRS*)malloc(sizeof(LCRS));
	tree -> root = initNode(i);
	return tree;
}
 
//traversal LCRS
void traversalLCRS(Node* node){
	if(node == NULL){
		return;
	}
	printf("%d\n",node -> key);
	traversalLCRS(node -> right_sibilings);
	traversalLCRS(node -> left_children);
}

