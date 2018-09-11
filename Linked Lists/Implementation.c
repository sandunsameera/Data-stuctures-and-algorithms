#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *next;
};

typedef struct node node;

node *start=NULL;

node *getnode(){
	node *newnode;
	newnode=(node*) malloc(sizeof(node));
	printf("\nEnter Data To Node : ");
	scanf("%d",&newnode->data);
	newnode->next=NULL;
	return newnode;
	
}

void createlist(int element){
	int i=0;
	node *newnode;
	node *temp;
	while(i<element){
		newnode=getnode();
		if(start==NULL){
			start=newnode;
		}else{
			temp=start;
			while(temp->next!=NULL){
				temp=temp->next;
			}
			temp->next=newnode;
		}
		i++;
	}
}


int main(){
	printf("\nCreate a linked list....");
	printf("\nEnter Number Of Elements : ");
	int i;
	scanf("%d",&i);
	createlist(i);
}






