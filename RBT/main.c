#include"RBT.c"

int main(){
	RBT* tree = initRBT(41);
	inTree(tree,38);
	inTree(tree,31);
	inTree(tree,12);
	inTree(tree,19);
	inTree(tree,8);
	display(tree,tree -> root);

	BSTdelete(tree,getMin(tree,tree -> root));
	

	printf("min :%d\n",getMin(tree,tree -> root) -> key);
	printf("max :%d\n",getMax(tree,tree -> root) -> key);

}
