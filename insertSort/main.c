#include"insertSort.c"

int main(){
	int array[]= {19,2,3,4,1,2,5,6,4};
	display(array,size(array));
	DO_insertSort(array,size(array));
	printf("---\n");
	display(array,size(array));
}
