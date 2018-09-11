//question 06
#include<stdio.h>
int stack[20];
int top=-1;

void push(int x){
	top++;
	stack[top]=x;
}

void pop(){
	printf("%d",stack[top]);
	top--;
}

int main(){
	printf("Enter Number To Conver To Binary : ");
	int num;
	scanf("%d",&num);
	while(num!=0){
		push(num%2);
		num=num/2;	
	}
	while(top!=-1){
		pop();
	}
}
