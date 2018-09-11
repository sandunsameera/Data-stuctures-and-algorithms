#include<stdio.h>
#include<stdlib.h>

	struct linklist{
		int data;
		struct linklist* next;
	};
	
	typedef struct linklist node;
	
	
	node* getnode(){
		node * newnode;
		newnode=(node*)malloc(sizeof(node));
		printf("Enter Data To Store In The Node :");
		scanf("%d",&newnode->data);
		newnode->next=NULL;
		return newnode;
	}
	

void makelist(int n){
	int i;
	node *newnode;
	node *temp;
	for(i=0;i<n;i++){
		newnode=getnode();
		if(start==NULL){
			start=newnode;
		}
		else
		{
			temp=start;
			while(temp->next!=NULL){
				temp=temp->next;
			}
		}	temp->next=newnode;
}

}

int main(){


}
