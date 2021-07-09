#include"RBT.c"

int main(){
	RBT* tree = initRBT(0);
	insertNode(tree,10);
	printf("%d",tree -> root -> right -> key);
}
