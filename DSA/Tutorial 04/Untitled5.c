#include<stdio.h>
#define size 10
int queue[size];
int front=-1, rear=-1;

void enqueue(int n);
int dequeue();
void display();
void eliminate(int m);

int main(){
	int n,m,i,k;
	printf("enter value for n:");
	scanf("%d",&n);
	printf("enter value for m:");
	scanf("%d",&m);
	for(i=0;i<n;i++){
		enqueue(i);
	}
	display(n);
	k=n;
	for(i=0;i<n-1;i++){
		eliminate(m);
		k--;		
	}
	printf("Postition to sit: %d",peek());
	return 0;
}
void enqueue(int n){
	if(front== rear+1 || front==0 && rear==size-1){
		printf("queue is full\n");
	}
	else{
		if(front==-1){
			front++;
		}
		rear=(rear+1)%size;
		queue[rear]=n;
		//printf("%d inserted ",queue[rear]);
	}
	return;
}
void eliminate(int m){
	int x,n;
	x=m;
	while(x!=1){
		n=dequeue();
		enqueue(n);
		x--;
	}
	printf("%d eliminated\n",dequeue());
	return;
}
int dequeue(){
	int n;
	if(rear==-1 && front==-1){
		printf("queue is empty");
	}
	else{
		n=queue[front];
		front=(front+1)%size;
		return n;
	}
}
void display(){
	int i;
	if(front==-1 && rear==-1){
		printf("queue is empty\n");
	}
	else{
		for(i=front;i!=rear;i=(i+1)%size){
			printf("%d ",queue[i]);
		}
		printf("%d ",queue[rear]);
		printf("\n");
	}
	return;
}
int peek(){
	return queue[front];
}
