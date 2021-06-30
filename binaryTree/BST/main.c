#include"BST.c"


int main(){
	BST* tree = initBST(2);
	add(tree,1);	
	add(tree,2);
	add(tree,1);
	add(tree,3);	
	add(tree,2);
	add(tree,4);
	printf("%d",min(tree));
	printf("%d",max(tree));
}
