#include<stdio.h>
#include"stdlib.h"

void swapPro(int* a,int* b){
	int x = *a;
	*a = *b;
	*b = x;
}


void mergePro(int* array,int l,int mid,int h){
	int p1 = l;
	int p2 = mid + 1;
	
	int* ret = malloc(sizeof(int)*(h - l +1));
	int p = 0;

	while((p1 <= mid) && (p2 <= h)){
		if(array[p1] < array[p2]){
			ret[p] = array[p1];
			p1 ++;	
			p ++;
		}else{
			ret[p] = array[p2];
			p2 ++;
			p ++;
		}
	}

	if(p1 > mid){
		while(p2 <= h){
			ret[p] = array[p2];
			p ++;
			p2 ++;
		}
	}else{
		while(p1 <= mid){		
			ret[p] = array[p1];
			p ++;
			p1 ++;
		}
	}
	printf("len:%d\n",p);
	for(int i  = 0; i < p; i++){
		array[l + i] = ret[i];
	}
	display(ret,10);
	free(ret);
}


void  mergeSort(int*array,int l,int mid,int h){
//	printf("l:%d,mid:%d,h:%d\n",l,mid,h);
	if(h - l == 1){
		if(array[l] > array[h]){
			swapPro(&array[l],&array[h]);
		}
	}else if(l != h){
		mergeSort(array,l,(mid+l)/2,mid);
		mergeSort(array,mid + 1,(mid + 1 + h)/2,h);
		mergePro(array,l,mid,h);
	}
}
