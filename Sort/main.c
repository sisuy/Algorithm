#include"insertSort.c"
#include"BubbleSort.c"
#include"test.c"
int main(){
	int array[]= {19,2,3,4,1,2,5,6,4};
	printf("size:%d",size(array));	
	bubble_sort(array,size(array));
	

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

	int A[] = {1,1,1,1,1,1};
	int B[] = {1,0,1,1,0,0};
	binaryDisplay(binaryAdd(A,B));
	printf("\n---\n");
	int C[] = {1,3,5,6,7,9,2,4,6,6,10,11};
	display(C,12);
	printf("---\n");
	display(merge(C,0,5,11),12);
	
	printf("---\n");
	int E[] = {-1,2,-4,3,1,0,-1,4,-3,5};
	display(FindMaxCrossingSubarray(E,0,4,9),3);
	printf("---\n");
	int F[10] ={1,-2,3,-1,1,-9,7,3,-9,1};
	display(FindMaxSubarray(F,0,9),3);
}
