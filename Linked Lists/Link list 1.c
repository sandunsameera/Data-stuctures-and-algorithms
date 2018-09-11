#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node* next;
};

typedef struct node node;

node* start;

node* getnode(){
	node* newnode;
	newnode=(node*) malloc(sizeof(node));
	printf("\nEnter Data : ");
	scanf("%d",&newnode->data);
	newnode->next=NULL;
	return newnode;
}

void makelist(int elements){
	node* temp;
	node* newnode;
	int i=0;
	for(i;i<elements;i++){
		newnode=getnode();
		if(start==NULL){
			start=newnode;
		}
		else{
			temp=start;
			while(temp->next!=NULL){
				temp=temp->next;
			}
				temp->next=newnode;
		}
	}
}

void del(int data){	//this will delete the node which contains the corresponding data
	node* temp=start;
	node* preptr;
	node* postptr;
	while(temp->next!=NULL){
		printf("\nDele");
		preptr=temp;
		temp=temp->next;
		postptr=temp->next;
		if(temp->data==data){
			printf("\ngot int");
			preptr->next=postptr;
			break;
		}
	}
	
}
void insertend(){
	node* temp=start;
	node* newnode=getnode();
	while(temp->next!=NULL){
		temp=temp->next;
	}
	temp->next=newnode;
	
}
void insertbeg(){
	node* newnode=getnode();
	newnode->next=start;
	start=newnode;
}

void insert(int position_data){
	node* newnode;
	node* temp=start;
	node* pre;
	node* post;
	while(temp->next!=NULL){
		pre=temp;
		temp=temp->next;
		post=temp;
		if(temp->data==position_data){
			newnode=getnode();
			pre->next=newnode;
			newnode->next=post;
			break;
		}
	}
	
	
}

void show(){
	node* temp=start;
	int i=1;
	while(temp->next!=NULL){
		printf("\nNode %d data : %d ",i++,temp->data);
		temp=temp->next;	
	}if(temp->next==NULL){
		printf("\nNode %d data : %d ",i++,temp->data);
	}
}

int main(){
makelist(5);
show();
insertbeg();
show();
insertend();
show();
return 0;
}

