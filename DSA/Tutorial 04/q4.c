#include<stdio.h>


int front=-1;
int rear=-1;
int count=0;

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

int prev(int cq[]){
	int k=0;
	for(k;k<count;k++){
		printf("%d ",cq[k]);
	}
}
int main(){
// Inputs
	
	printf("\t\t====Josephus Problem====\n");
	printf("\nHow Many People(n) In The Game : ");
	int n;
	scanf("%d",&n);
	printf("\nEnter Kill Differnce(m) : ");
	int m;
	scanf("%d",&m);



	printf("\n\n");
//Enqueue Positions
	int cq[n];
	int i=0;
	for(i;i<n;i++){
		enqueue(cq,n,i);
	}
	
	i=0;
	int temp;
	prev(cq);
	printf("\n");
	while(count!=1){
		for(i;i<m-1;i++){
			temp=dequeue(cq,n);
			enqueue(cq,n,temp);
		}
		printf("\nElimanted Position %d",dequeue(cq,n));
		i=0;
			
	}
	printf("\n\n\t====Josephus Position %d====",dequeue(cq,n));


	
	
	
	
	
	return 0;
}
