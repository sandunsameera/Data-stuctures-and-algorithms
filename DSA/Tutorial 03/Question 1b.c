//Tutorial 3
//Question 01
//part b

#include<stdio.h>
int top=-1;
char stack[];

void push(char stack[],char val){
	stack[++top]=val;
	printf("\nElement Pushed : %c",stack[top]);
}

void pop(char stack[]){
	printf("\nElement Poped : %c",stack[top--]);
}

void peek(char stack[]){
	printf("\nPeek Top Element : %c",stack[top]);
}
int main(){
	push(stack,'C');
	push(stack,'A');
	pop(stack);
	peek(stack);
}
