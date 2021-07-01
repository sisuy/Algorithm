#include"BST.h"

//init node
Node* initNode(int i){
	Node* node  =(Node*)malloc(sizeof(Node));
	node -> key = i;
	node -> left = NULL;
	node -> right = NULL;
	node -> p = NULL; 
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
	Node* parent = tree -> root -> p;
	while(tmp != NULL){
		if(i < tmp -> key){
			parent = tmp;
			tmp = tmp -> left;
		}else{
			parent = tmp;
			tmp = tmp -> right;
		}
	}

	if(i < parent -> key){
		parent -> left = initNode(i);
		parent -> left -> p = parent;
	}else{
		parent -> right = initNode(i);
		parent -> right -> p = parent;
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
	
	traversal(node -> right);
	printf("%d\n",node -> key);
	traversal(node -> left);
}

//get successor
Node* getSuccessor(Node* node){
	if(node -> right != NULL){
		Node* ret = node -> right;
		while(ret->left != NULL){
			ret = ret -> left;
		}
		return ret;
	}

	while(node != node -> p -> left){
		node = node -> p;
	}
	return node -> p;
}

//transplant
void transplant(Node* node1,Node* node2){
	if(node1 == NULL){
		printf("wrong obj\n");
		return;
	}
	if(node1 == node1 -> p -> left){
		node1 -> p -> left = node2;
		if(node2 == node2 -> p -> left){
			node2 -> p -> left = NULL;
		}else{
			node2 -> p -> right = NULL;
		}
		node2 -> p = node1 -> p;
	}else{
		node1 -> p -> right = node2;

		if(node2 == node2 -> p -> left){
			node2 -> p -> left = NULL;
		}else{
			node2 -> p -> right = NULL;
		}
		node2 -> p = node1 -> p;	
	}	
}

//delete node
void del(Node* node){
	if(node == NULL){
		printf("wrong node\n");
		return;
	}

	if(node -> left == NULL && node -> right == NULL){
		if(node == node -> left){
			free(node -> p -> left);
			node -> p -> left = NULL;
		}else{
			free(node -> p -> right);
			node -> p -> right = NULL;
		}
	}else if(node -> left == NULL){
		if(node == node -> p -> left){
			node -> p -> left = node -> right;
			node -> right -> p = node -> p;
		}else{
			node -> p -> right = node -> right;
			node -> right -> p = node -> p;
		}
	}else if(node -> right == NULL){
		if(node == node -> p -> left){
			node -> p -> left = node -> left;
			node -> left -> p = node -> p;
		}else{
			node -> p -> right = node -> right;
			node -> right -> p = node -> p;
		}
	}else{
		Node* successor = getSuccessor(node);
		transplant(node,successor);
		successor -> right = node -> right;
		successor -> left = node -> left;
		}
	}


