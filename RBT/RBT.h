#include<stdio.h>
#include<stdlib.h>
typedef int Color;
#define 1 black
#define 0 red

typedef struct Node{
	int key;
	Color color;
	struct Node* p;
	struct Node* left;
	struct Node* right;
}Node;

typedef struct RBT{
	Node* root;
}RBT;


//init node
Node* initNode(int i);

//init RBT
RBT* initRBT(int i);

//left rotate
void leftRotate(Node* node);

//right rotate
void rightRotate(Node* node);

