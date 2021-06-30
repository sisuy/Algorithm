#include"BST.h"

//init node
Node* initNode(int i){
	Node* node  =(Node*)malloc(sizeof(Node));
	node -> key = i;
	node -> left = NULL;
	node -> right = NULL;
	return node;
}

//init BST,and set the root
BST* initBST(int i){
	BST* tree = (BST*)malloc(sizeof(BST));
	tree -> root = initNode(i);
	return tree;
}
// get root 
Node* getRoot(BST* tree){
	return tree-> root;
}

//add Node
void add(BST* tree,int i){
	Node* tmp = tree -> root;
	while(1){
		if(i < tmp-> key){
			if(tmp -> left == NULL){
				tmp->left = initNode(i);
				break;
			}
			tmp = tmp-> left;	
		}else{
			if(tmp -> right == NULL){
				tmp->right = initNode(i);
				break;
			}
			tmp = tmp-> right;
		}
	}
}

//minimun
int min(BST* tree){
	Node* tmp = tree -> root;
	while (1){
		if(tmp -> left == NULL){
			return tmp -> key;
		}
		tmp = tmp -> left;
	} 
}

//maximun
int max(BST* tree){
	Node* tmp = tree -> root;
	while(1){
		if(tmp -> right == NULL){
			return tmp->key;
		}
		tmp = tmp -> right;
	}
}

//traversal
void traversal(Node* node){
	if(node == NULL){
		return;
	}
	printf("%d\n",node -> key);
	
	traversal(node -> right);
	traversal(node -> left);
}
