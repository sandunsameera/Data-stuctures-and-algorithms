//queue operations

#include<stdio.h>

int queue[5];
int front=-1;
int rear=-1;

int enqueue(){
	if(rear==4){
		printf("\n#####Cant Insert Queue Overflow####");
		return 0;
	}if(rear==-1 && front==-1){
		front=0;rear=0;
		int element;
		printf("\nEnter Element to Enqueue : ");
		scanf("%d",&element);
		queue[rear]=element;;
	}else{
		int element;
		printf("\nEnter Element to Enqueue : ");
		scanf("%d",&element);
		queue[++rear]=element;
	}
	return 0;
}

int dequeue(){
	if((front==-1)||(front>rear)){
		printf("\n#####Queue Underflow#####");
		return 0;
	}else{
	printf("\n %d index front %d ",queue[front],front);
	return queue[front++];}
}

int main(){
	while(1){
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

