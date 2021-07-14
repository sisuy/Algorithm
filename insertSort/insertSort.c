#include<stdio.h>
#include<stdlib.h>


void insertSort(int* array,int size){
	for(int pointer1 = 0;pointer1 < size;pointer1 ++){
		int key = array[pointer1];
		int pointer2 = pointer1 - 1;
		while(pointer2 >=  0 && array[pointer2] > key){
			array[pointer2 +1] = array[pointer2];
			pointer2 --;
		}
		array[pointer2 +1] = key;
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
