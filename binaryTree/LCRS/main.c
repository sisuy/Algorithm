#include"LCRS.c"

int main(){
	LCRS* tree = initLCRS(0);
	Node* root = tree -> root;
	root -> left_children = initNode(1);
	root -> left_children -> right_sibilings = initNode(2);
	traversalLCRS(tree->root);
}
