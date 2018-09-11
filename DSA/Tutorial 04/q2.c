//Circular Queue
#include<stdio.h>
#define MAX 5

//Queue 1 Input Queue
int cq_Input[MAX];
int front_Input=-1;
int rear_Input=-1;
int count_Input=0;
int enqueue_Input(int value){
	if(count_Input==MAX){
		printf("\nCannot Insert Queue Overflow");
		return 0;
}
  if(rear_Input==-1 && front_Input==-1){
	  rear_Input=0;
		
		cq_Input[rear_Input]=value;
		count_Input++;
		return 0;
}
		rear_Input=(rear_Input+1)%MAX;
		cq_Input[rear_Input]=value;
		count_Input++;
		return 0;
}
int dequeue_Input(){
	if(count_Input==0){
		rear_Input=front_Input=-1;
		return 0;
	}	
	count_Input--;
	front_Input=(front_Input+1)%MAX;
	return cq_Input[front_Input];
}			


//Queue 2 Temp Queue
int cq_Temp[MAX];
int front_Temp=-1;
int rear_Temp=-1;
int count_Temp=0;
int enqueue_Temp(int value){
	if(count_Temp==MAX){
		printf("\nCannot Insert Queue Overflow");
		return 0;
}
  if(rear_Temp==-1 && front_Temp==-1){
	  rear_Temp=0;
		cq_Temp[rear_Temp]=value;
		count_Temp++;
		return 0;
}
		rear_Temp=(rear_Temp+1)%MAX;
		cq_Temp[rear_Temp]=value;
		count_Temp++;
		return 0;
}
int dequeue_Temp(){
	if(count_Temp==0){
		rear_Temp=front_Temp=-1;
		return 0;
	}	
	count_Temp--;
	front_Temp=(front_Temp+1)%MAX;
	return cq_Temp[front_Temp];
}	


//Queue 3 Sorted Queue
int cq_Sorted[MAX];
int front_Sorted=-1;
int rear_Sorted=-1;
int count_Sorted=0;
int enqueue_Sorted(int value){
	if(count_Sorted==MAX){
		printf("\nCannot Insert Queue Overflow");
		return 0;
}
  if(rear_Sorted==-1 && front_Sorted==-1){
	  rear_Sorted=0;
		cq_Sorted[rear_Sorted]=value;
		count_Sorted++;
		return 0;
}
		rear_Sorted=(rear_Sorted+1)%MAX;
		cq_Sorted[rear_Sorted]=value;
		count_Sorted++;
		return 0;
}
int dequeue_Sorted(){
	if(count_Sorted==0){
		rear_Sorted=front_Sorted=-1;
		printf("\nCannot Delete Queue Is Empty");
		return 0;
	}	
	count_Sorted--;
	front_Sorted=(front_Sorted+1)%MAX;
	return cq_Sorted[front_Sorted];
}	


int main(){
	printf("\t\t====Sorting Number Sequence====\n");
	printf("\n\nInsert 5 Elements To Get Sorted\n");
	int i=0;
	for(i;i<MAX;i++){//Taking The Input
		int value;
		printf("\nEnter Value %d To Enque : ",i+1);
		scanf("%d",&value);
		enqueue_Input(value);	
}
	int temp;	

	for(i=0;i<5;i++){ //Copy Input to Temp
		temp=dequeue_Input();
		enqueue_Input(temp);
		enqueue_Temp(temp);
	}
	
	int min;
	int counter=5;
	int n=5;
	//find the minimum
	
while(count_Sorted!=5){
	min=dequeue_Temp();
	while(count_Temp!=0){
		int item=dequeue_Temp();
		if(item<=min){
			min=item;
		}	
	}

int flag=0;
	while(counter>0){ //Copy Input to Temp
		temp=dequeue_Input();
		if(temp==min){
		flag++;
		if(flag==2){
			enqueue_Temp(temp);
			enqueue_Input(temp);
			counter--;
		}
		
		}
		
		else{
		enqueue_Temp(temp);
		enqueue_Input(temp);
		counter--;}
	}
	counter=n-1;
	enqueue_Sorted(min);
}
printf("\n-------------------------\n\nSorted List(Ascending Order)\n{ %d , ",dequeue_Sorted());
printf("%d , ",dequeue_Sorted());
printf("%d , ",dequeue_Sorted());
printf("%d , ",dequeue_Sorted());
printf("%d }\n",dequeue_Sorted()); 
}
