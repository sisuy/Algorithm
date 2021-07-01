#include"BST.c"


int main(){
	BST* tree = initBST(6);
	add(tree,1);	
	add(tree,2);
	del(tree-> root-> left);
	traversal(tree -> root);
}
