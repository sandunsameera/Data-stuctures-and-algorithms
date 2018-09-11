#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

struct node{
	int data;
	struct node* next;
};

typedef struct node node;

node* top=NULL;

void push(int data){
	if(top==NULL){
		node* newnode=(node*) malloc(sizeof(node));
		top=newnode;
		top->next=NULL;
		top->data=data;
	}else{
		node* newnode=(node*) malloc(sizeof(node));
		newnode->next=top;
		newnode->data=data;
		top=newnode;
		
	}
}

int pop(){
	if(top==NULL){
		return 0;
	}else{
		node* temps=top;
		int data=top->data;
		node* temp=top->next;
		top=top->next;
		printf("%d\n",data);
		free(temps);
		return data;
	}
}


int main(){
	push(12);
	push(15);
	push(43);
	pop();
	pop();
	pop();
	return 0;
}

