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
Node* initNode(RBT* tree,int i);

//init RBT
RBT* initRBT(int i);

//insert node
Node* insertNode(RBT* tree,int i);

//color
void colorNode(RBT* tree,Node* node,Color color);

//get min
Node* getMin(RBT* tree,Node* node);

//get madx
Node* getMax(RBT* tree,Node* node);

//fix tree
void fixTree(RBT* tree,Node* node);

//left rotate
void leftRotate(RBT* tree,Node* node);

//right rotate
void rightRotate(RBT* tree,Node* node);

//intree
void inTree(RBT* tree,int i);

//display
void display(RBT* tree,Node* node);

//delete Node by BST
void BSTdelete(RBT* tree,Node* node);
