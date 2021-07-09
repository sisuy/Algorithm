#include<stdio.h>
#include<stdlib.h>
typedef int Color;
#define black 1
#define red 0

typedef struct Node{
	int key;
	Color color;
	struct Node* p;
	struct Node* left;
	struct Node* right;
}Node;

typedef struct RBT{
	Node* root;
	Node* Nil;
}RBT;


//init node
Node* initNode(int i);

//init RBT
RBT* initRBT(int i);

//insert node
void insertNode(RBT* tree,int i);

//fix tree
void fixTree(RBT* tree,Node* node);

//left rotate
void leftRotate(Node* node);

//right rotate
void rightRotate(Node* node);

