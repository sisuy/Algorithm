#include"RBT.c"

int main(){
	RBT* tree = initRBT(10);
	//inTree(tree,10);
	//inTree(tree,5);
	insertNode(tree,10);
	insertNode(tree,5);
	inTree(tree,4);
	display(tree,tree -> root);
}
