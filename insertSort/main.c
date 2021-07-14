#include"insertSort.c"

int main(){
	int array[]= {19,2,3,4,1,2,5,6,4};
	display(array,size(array));
	DO_insertSort(array,size(array));
	printf("---\n");
	display(array,size(array));
	IO_insertSort(array,size(array));
	printf("---\n");
	display(array,size(array));
	printf("---\n");
	printf("19:%d\n",lookup(array,19));
	printf("---\n");

	int A[] = {0,0,0,0,0,1};
	int B[] = {1,1,1,1,0,1};
	binaryDisplay(binaryAdd(A,B));
}
