#include"RBT.c"

int main(){
	RBT* tree = initRBT(7);
	inTree(tree,6);
	inTree(tree,11);
	inTree(tree,6);
	inTree(tree,3);
	display(tree,tree -> root);

}
