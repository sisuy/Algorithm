#include"RBT.h"

//init node
Node* initNode(RBT* tree,int i){
	Node* node = malloc(sizeof(Node));
	node -> key = i;
	node -> color = red;
	node -> p = tree -> Nil;
	node -> left = tree -> Nil;
	node -> right = tree -> Nil;
	return node;
}

//init RBT
RBT* initRBT(int i){
	RBT* tree = malloc(sizeof(RBT));
	tree -> Nil = malloc(sizeof(Node));
	tree -> Nil -> key = 0;
	tree -> Nil -> color = black;
	tree -> Nil -> right = tree -> Nil;
	tree -> Nil -> left = tree -> Nil;
	tree -> Nil -> p = tree -> Nil;
	tree -> root = malloc(sizeof(Node));
	tree -> root -> p = tree -> Nil;
	tree -> root -> key = i;
	tree -> root -> color = black;
	tree -> root -> left = tree -> Nil; 
	tree -> root -> right = tree -> Nil; 
	tree -> root -> p = tree -> Nil;
	return tree;
}

//left rotate
void leftRotate(RBT* tree,Node* node){
	Node* y = node -> right;
	if(node == tree -> root){
		tree -> root = y;
	}
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
void rightRotate(RBT* tree,Node* y){
	Node* x = y -> left
		;
	if(y == tree -> root){
		tree -> root = x;
	}
	y -> left = x -> right;
	x -> right -> p = y;
	x -> right = y;
	if(y == y -> p -> right){
		y -> p -> right = x;
	}else{
		y -> p -> left = x;
	}
	x -> p = y -> p;
	y -> p = x;
}

//color
void colorNode(RBT* tree,Node* node,Color color){
	if(node == tree -> Nil || node ==tree -> root){
		return;
	}else{
		if(color == black){
			node -> color = black;
		}else{
			node -> color = red;
		}
	}
}

//insert node
Node* insertNode(RBT* tree,int i){
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
		p -> left = initNode(tree,i);
		tmp = p -> left;
		p -> left -> p = p;
	}else if(p == tree -> Nil){
		tree -> root = initNode(tree,i);
		tmp = tree -> root;
		tree -> root -> p = tree -> Nil; 
	}else{
		p -> right = initNode(tree,i);
		tmp = p -> right;
		p -> right -> p = p;
	}
	return tmp;
}

//fix tree
void fixTree(RBT* tree,Node* z){
//case 1:
while(z -> p != tree -> Nil && z -> color == red){
	if(z -> p == z -> p -> p -> left){
		Node* y = z -> p -> p -> right;
		//case1 : uncle(y) color = red
		if(y -> color == red){
			colorNode(tree,z -> p,black);
			colorNode(tree,y,black);
			colorNode(tree,y -> p,red);
			z = y -> p;
			z = z -> p -> p;
		}else if(z == z -> p ->left){
			//case2 : uncle is black and x is the left node
			z = z -> p;
			rightRotate(tree,z);
		}else{
			z = z -> p;
			leftRotate(tree,z);
		}
}
	
}
}

//display
void display(RBT* tree,Node* node){
	if(node == tree -> Nil){
		return;
	}else{
		char* color = malloc(sizeof(char)* 20);
		if(node -> color == red){
			color = "red";
		}else{
			color = "black";
		}
		display(tree,node -> left);
		printf("%d %s\n",node -> key, color);
		display(tree,node -> right);		
	}
}

void inTree(RBT* tree,int i){
	fixTree(tree,insertNode(tree,i));
}
