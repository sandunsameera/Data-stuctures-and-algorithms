#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node* next;
	struct node* prev;
};

typedef struct node node;

node* start=NULL;
node* end=NULL;

node* getnode(){
	node* newnode=(node*)malloc(sizeof(node));
	newnode->next=NULL;
	newnode->prev=NULL;
	printf("\nInsert Data : ");
	scanf("%d",&newnode->data);
	return newnode;
}

void addnode(){
	node* newnode=getnode();
	node* temp=start;
	node* prev;
	if(start==NULL){
		start=newnode;
	}else{
		while(temp->next!=NULL){
			prev=temp;
			temp=temp->next;
		}
		temp->prev=prev;
		temp->next=newnode;
		end=temp->next;
		end->prev=temp;
	}
}
int main(){
addnode();
addnode();
addnode();

printf("\n%d",end->prev->prev->prev->data);
return 0;
}

