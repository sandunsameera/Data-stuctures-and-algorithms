#include<stdio.h>
int stack[15];
int top=-1;

void push(int item){
	if(top==14){
		printf("/nCannot Push Stack Overflow");
	}
	stack[++top]=item;
	printf("\nItem Pushed");
}

void pop(){
	if(top==-1){
		printf("\nCannot Perform Stack Underflow");
	}else{
	printf("Item Popped %d",stack[top--]);
}
}

void isFull(){
	if(top==14){
		printf("\nStack Is Full");
	}else{
		printf("\nNot Full");
	}
}

void isEmpty(){
	if(top==-1){
		printf("\nStack Is Empty");
	}else{
		printf("\nNot Empty");
	}
}

void getSize(){
	printf("\nSize Of The Stack is %d",sizeof(stack)/4);
}

void outPut(){
	if(top==-1){
		printf("\nCannot Perform Stack Is Empty No Item To Display");
	}else{
	printf("\nElements In The Stack\n");
	int i=top;
	while(i>-1){
		printf("%d ",stack[i--]);
	}
}
}
int main(){
	printf("Enter The Following Commands To Perform Stack Operations\n");
	printf("\n-----------------------------------------------------\nCommand 1 - Push\nCommand 2- Pop\nCommand 3 - Check is it Empty\nCommand 4- Is It Full\nCommand 5 - Get The Size Of The Array\nCommand 6- Show All Elements Of The Array\n");
	while(1){
		printf("\n-------------------------------------------------\n1-Push  2-Pop  3-isEmpty  4-IsFull  5-Size Of The Stack  6-OutPut\n-----------------------------------------------\n");
	printf("\nEnter Command : ");
	int key;
	scanf("%d",&key);
	switch(key){
		case(1):{
			printf("Enter Element To Push : ");
			int value;
			int *mem=&value;
			scanf("%d",mem);
			push(value);
			break;
		}
		case(2):{
			pop();
			break;
		}
		case(3):{
			isEmpty();
			break;
		}
		case(4):{
			isFull();
			break;
		}
		case(5):{
			getSize();
			break;
		}
		case(6):{
			outPut(stack);
			break;
		}
}
}
}
