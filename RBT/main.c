#include"RBT.c"

int main(){
	RBT* tree = initRBT(41);
	inTree(tree,38);
	inTree(tree,31);

	display(tree,tree -> root);
	printf("%d\n",tree -> root -> key);
	printf("\n");
	RBTdelete(tree,tree -> root -> left);

	display(tree,tree -> root);


}
