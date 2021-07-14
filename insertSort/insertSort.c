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
