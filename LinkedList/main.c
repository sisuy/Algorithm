#include"LinkedList.c"


int main(){
	Stack* stack = init(0);
//	push(stack,1);
//	push(stack,2);
//	push(stack,3);
//	display(stack);
	printf("\n");
	pop(stack);
	push(stack,1);
	display(stack);
	return 0;
}
