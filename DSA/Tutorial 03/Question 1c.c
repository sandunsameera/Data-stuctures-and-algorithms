//Tutorial 3
//Question 01
//Part C,D

#include<stdio.h>
#include<string.h>



void push(char stack[],char val,int top){
	stack[++top]=val;
	printf("\nElement Pushed : %c",stack[top]);
}

char pop(char stack[],int top){
	return stack[top--];
}

void peek(char stack[],int top){
	printf("\nPeek Top Element : %c",stack[top]);
}
int main(){
	char stack1[100];
	printf("Input String : ");
	scanf("%s",stack1);
	int top1=strlen(stack1)-1;
	int top2=-1;
	int top3=-1;
	char stack2[50];		
	char stack3[50];
	while(top1!=-1){
		stack2[++top2]=stack1[top1--];
	}
	while(top2!=-1){
		stack3[++top3]=stack2[top2--];
	}
	printf("\n----------Coppied--------\nCoppied String : %s\n------------------",stack3);
}
