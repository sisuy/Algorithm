#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

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

int* merge(int* array,int p,int q,int r){
	int sizeA = q - p + 1;
	int sizeB = r - q; 

	int* A = malloc(sizeof(int) * sizeA);
	int* B = malloc(sizeof(int) * sizeB);

	for(int i = 0; i < sizeA; i ++){
		A[i] = array[p + i];
	}

	for(int i = 0; i < sizeB; i ++){
		B[i] = array[q + i + 1];
	}
	int i = 0;
	int j = 0;
	int h = 0;
	while( i < sizeA && j < sizeB){
		if(A[i] < B[j]){
			array[h] = A[i];
			i ++;
		}else{
			array[h] = B[j];
			j ++;
		}
		h ++;
	}

	if(i > j){
		while(j < sizeB){
			array[h] = B[j];
			j ++;
			h ++;
		}
	}else{
		while(i< sizeA){
			array[h] = A[i];
			i ++;
			h ++;
		}
	}

	return array;
}

int* FindMaxCrossingSubarray(int* A,int low,int mid,int high){
	int* ret = malloc(sizeof(int) * 3);

	int left_max = INT_MIN;
	int sum = 0;
	int left_pointer = mid;
	for(int i = mid; i >= low; i --){
		sum += A[i];
		if(sum > left_max){
			left_max = sum;
			left_pointer = i;
		}
	}

	int right_max = INT_MIN;
	sum = 0;
	int right_pointer = mid + 1;
	for(int j = mid +1; j <= high; j ++){
		sum += A[j];
		if(sum > right_max){
			right_max = sum;
			right_pointer = j;
		}
	}

	ret[0] = left_pointer;
	ret[1] = right_pointer;
	ret[2] = left_max + right_max;

	return ret;
}


int* FindMaxSubarray(int* A;int low,int high){
	
}
