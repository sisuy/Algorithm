#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

void swap(int* a,int* b){
	int  tmp = *b;
	*b = *a;
	*a = tmp;
}


void bubble_sort(int* array,int size){
	for(int i = 0;i < size - 1; i++){
		bool flag = false;
		for(int j = 0;j < size - 1 - i; j ++){
			if(array[j] > array[j +1]){
				swap(&array[j],&array[j+1]);
				flag = true;
			}
		}
		if(flag == false){
			break;
		}
	}
}
