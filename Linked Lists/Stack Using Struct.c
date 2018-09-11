#include<stdio.h>
struct stack{
	int top;
	int array[5];
	};
typedef struct stack stack;

void push(int element,stack *stack1){
	int top=*(stack1).top;
	top++;
	*stack1.array[top]=element;
}

void pop(stack stack1){
	int top=stack1.top;
	printf("%d",stack1.array[top--]);
	stack1.top=top;	
}


int main(){
	stack stacks={-1};
	push(23,&stacks);
	printf("%d",stacks.array[1]);
return 0;
}

