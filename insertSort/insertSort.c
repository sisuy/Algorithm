#include<stdio.h>
#include<stdlib.h>


void IO_insertSort(int* array,int size){
	for(int pointer1 = 1;pointer1 < size;pointer1 ++){
		int key = array[pointer1];
		int pointer2 = pointer1 - 1;
		while(pointer2 >=  0 && array[pointer2] > key){
			array[pointer2 +1] = array[pointer2];
			pointer2 --;
		}
		array[pointer2 +1] = key;
	}
}

void DO_insertSort(int* array,int size){
	for(int pointer1 = 1;pointer1 < size; pointer1 ++){
		int key = array[pointer1];
		int pointer2 = pointer1 - 1;
		while(pointer2 >= 0 && array[pointer2] < key){
			array[pointer2 + 1] = array[pointer2];
			pointer2 --;
		}
		array[pointer2+1] = key;
	}	
}

void display(int* array,int size){
	for(int i = 0; i < size; i++){
		printf("%d\n",array[i]);
	}
}

int size(int* array){
	return sizeof(array)+1;
}

int lookup(int* array,int i){
	int size = sizeof(array);
	int p = 0;
	//start: p = 0,when p < size,the while loop is valuabale
	while(p < size && array[p] != i){
	//end: when array[p] == i, then quit the loop
	//maintain: p ++,if p < size,the loop will be availuable	
		p ++;
	}

	if(array[p] == i){
		return p;
	}else{
		return -1; 
	}
}

int* binaryAdd(int* A,int* B){
	int size = sizeof(A);
	int* C = malloc(sizeof(int) * (size +1));
	
	int p = size - 1;
	int carry = 0;
	int output = 0;
	//start: p < size,inital p is 0
	while(p >= 0){
		output = (carry + A[p] + B[p])%2;
		carry = (A[p] + B[p])/2;
		C[p] = output; 
		p --;
	}
	C[p] = output;
	return C;
}

void binaryDisplay(int* array){
	for(int i = 0; i < sizeof(array); i++){
		printf("%d",array[i]);
	}
}
