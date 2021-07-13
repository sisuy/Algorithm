#include"RBT.c"

int main(){
	RBT* tree = initRBT(6);
	inTree(tree,2);
	inTree(tree,15);
	inTree(tree,10);
	inTree(tree,18);

	display(tree,tree -> root);
	printf("-----------------------------------------\n");
	RBTdelete(tree,tree -> root -> right);

	display(tree,tree -> root);
	printf("-----------------------------------------\n");

	RBTdelete(tree,tree -> root -> right);
	display(tree,tree -> root);
}
