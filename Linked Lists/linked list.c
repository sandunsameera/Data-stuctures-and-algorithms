#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *next;
};

typedef struct node node;

node *start=NULL;

node* getnode(){
	node* newnode;
	newnode=(node*)malloc(sizeof(node));
	printf("\nEnter Data:");
	scanf("%d",&newnode->data);
	newnode->next=NULL;
	return newnode;
}

node* getnode(){
	node *newnode;
	newnode=(node*) malloc(sizeof(node));
	printf("Enter Data : ");
	scanf("%d",&newnode->data);
	newnode->next=NULL;
	return newnode;
}

void createlist(int elements){
	int i=0;
	node *newnode;
	node *temp;
	for(i;i<elements;i++){
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
	}
}










int main(){
	int i;
	scanf("%d",&i);
	createlist(i);
	
	node *temp=start;
	printf("\nData : %d",temp->data);
	int count=1;
	while(temp->next!=NULL){
		
		temp=temp->next;
		printf("\nData : %d",temp->data);
		count++;
	}
	printf("\nNumber Of Nodes In The List : %d",count);
	
	
	
	
	
		
return 0;
}

