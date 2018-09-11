#include<stdio.h>
char que[3][10]={"John","Kate","Shankar"};
int count=3;
int front=2,rear=0;

//function declarations for the circular queue

void insert(){
	if(count==3){
		printf("\nQueue Is Full Can't Insert");
		return 0;
	}
		if(front==-1){			
			front=rear=0;
			printf("\nEnter Name Of The Patient : ");
			scanf("%s",&que[front]);
			count++;
			return 0;
		}
		front=(front+1)%3;
		printf("\nEnter Element : ");
		scanf("%s",&que[front]);
		count++;
		return 0;
	}
void remov(){
	if(count==0){
		front=-1;rear=-1;
		printf("\nQueue Is Empty");
		return 0;
	}
	count--;
	printf("\n%s",que[rear]);
	rear=(rear+1)%3;
	return 0;
}

void peek(){
	printf("\n%d Seats Left",(3-count));
	int i=rear;
	int c=count;
	printf("\n%d Patients Are Waiting To See The Doctor",count)
	;
	while(c>0){
		printf("\n%s",que[i++]);
		c--;
	}
}

int main(){
	printf("\nJohn Is Leaving So Lets Remove Him From The Queue");
	remov();
	printf(" Is Leaving Dequeue John\n\n");
	printf("\nZara is Coming Put Her Into The Queue (Type Zara And Hit Enter)");
	insert();
	printf("Zara Enqued");
	printf("\n\n\nJack Is Coming Try To Enqueue Him");
	insert();
	printf("\n\n\nKate Leaves Lets Dequeue Kate");
	remov();
	printf(" Dequed");
	printf("\n\n\nNow We Have a Seat For Jack Put Jack Into Queue(Type Jack and Hit Enter)");
	insert();
	printf("Jack Enqued");
	printf("\n\n\nShankar Leaves Lets Deque Shankar");
	remov();
	printf(" Dequed\n\n");
	
	peek();
	}

