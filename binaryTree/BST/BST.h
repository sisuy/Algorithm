#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
	int key;
	struct Node* left;
	struct Node* right;
}Node;

typedef struct BST{
	Node* root;
}BST;


//init node
Node* initNode(int i);

//init BST,and set the root
BST* initBST(int i);

//add Node
void add(BST* tree,int i);

//minimun
int min(BST* tree);

//maximun
int max(BST* tree);

//traversal
void traversal(Node* node);

// get root 
Node* getRoot(BST* tree);
