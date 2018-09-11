#include<stdio.h>


int front=-1;
int rear=-1;
int count=0;
int top=-1;

int push(int stack[],int element){
	stack[++top]=element;
	return 0;
}

int pop(int stack[]){
	return stack[top--]; 
}

int enqueue(int cq[],int n,int value){
	if(count==n){
		printf("\nCannot Insert Queue Overflow");
		return 0;
	}
	if(rear==-1){
		rear=0;
		cq[rear]=value;
		count++;
		return 0;
	}
		rear=(rear+1)%n;
		cq[rear]=value;
		count++;
		return 0;
}

int dequeue(int cq[],int n){
	if(count==0){
		rear=front=-1;
		printf("\nCannot Delete Queue Is Empty");
		return 0;
	}	
		front=(front+1)%n;
		count--;
		return cq[front];
}

int main(){
// Inputs

	printf("\nHow Many People(n) In The Game : ");
	int n;
	scanf("%d",&n);
	printf("\nEnter Kill Differnce(m) : ");
	int m;
	scanf("%d",&m);
	int stack[m];



//Enqueue Positions
	int cq[n];
	int i=0;
	for(i;i<n;i++){
		enqueue(cq,n,i);
	}
	i=0;
	int temp;
	while(count!=1){
		for(i;i<m-1;i++){
			temp=dequeue(cq,n);
			enqueue(cq,n,temp);
		}
		dequeue(cq,n);
		i=0;	
	}
	printf("\n%d",dequeue(cq,n));


	
	
	
	
	
	return 0;
}
