//Circular Queue
#include<stdio.h>
int cq[5];
int front=-1;
int rear=-1;
int count=0;

int enqueue(){
	if(count==5){
		printf("\nCannot Insert Queue Overflow");
		return 0;
	}
	if(rear==-1 && front==-1){
		front=rear=0;
		int value;
		printf("\nEnter Value To Enque : ");
		scanf("%d",&value);
		cq[rear]=value;
		count++;
		return 0;
	}
		int value;
		printf("\nEnter Value To Enque : ");
		scanf("%d",&value);
		rear=(rear+1)%5;
		cq[rear]=value;
		count++;
		return 0;
	
}

int dequeue(){
	if(count==0){
		rear=front=-1;
		printf("\nCannot Delete Queue Is Empty");
		return 0;
	}
/*	if(front==4 && rear!=0){
		front=0;
		printf("\n %d ",cq[front]);
		count--;
		return 0;
	}*/
		printf("\n %d ",cq[front]);
		front=(front+1)%5;
		count--;
		return 0;
}

int main(){
	while(1){
		printf("\n Rear: %d\t Front: %d",rear,front);
		printf("\n\n*****Queue Operations*****\n");
		printf("\npress 1 - enqueue");
		printf("\npress 2 - dequeue\n\nEnter Comand : ");
		int key;
		
		scanf("%d",&key);
		
		if(key==1){
			enqueue();
		}
		if(key==2){
			dequeue();
		}
	}
}
