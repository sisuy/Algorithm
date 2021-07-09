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
	tree -> Nil = NULL;
	tree -> root -> p = tree -> Nil;
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
void rightRotate(Node* y){
	Node* x = y -> left;
	y -> left = x -> right;
	x -> right -> p = y;
	x -> right = y;
	x -> p = y -> p;
	if(y == y -> p -> left){
		x -> p -> left = x;
	}else{
		x -> p -> right = x;
	}
	y -> p = x;
}

//insert node
void insertNode(RBT* tree,int i){
	Node* tmp = tree -> root;
	Node* p = tree -> Nil;
	while(tmp != tree -> Nil){
		if(i < tmp -> key){
			p = tmp;
			tmp = tmp -> left;
		}else{
			p = tmp;
			tmp = tmp -> right;
		}
	}
	if(i < p -> key){
		p -> left = initNode(i);
	}else if(p == tree -> Nil){
		tree -> root = initNode(i);
		tree -> root -> p = tree -> Nil; 
	}else{
		p -> right = initNode(i);
	}
}

//fix tree
void fixTree(RBT* tree,Node* x){
//case 1:
while(x != tree -> Nil && x -> color != red){
	if(x -> p == x -> p -> left){
		Node* y = x -> p -> right;
		//case1 : uncle(y) color = red
		if(y -> color == red){
			x -> p -> color = black;
			y -> color = black;
			y -> p -> color = red;
			x = y -> p;
		}else if(y -> color = black){
			`
		}
	}
}
}


