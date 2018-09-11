#include<stdio.h>
#include<string.h>
#define MAX 25
char que[25][10];
int count=0;;
int front=-1,rear=-1;

//function declarations for the circular queue


int insert(char value[10]){
	if(count==MAX){
		printf("/nQueue Is Full");
		return 0;
	}
		if(front==-1){			
			front=rear=0;
			strcpy(que[front],value);
			count++;
			return 0;
		}
		front=(front+1)%MAX;
		strcpy(que[front],value);
		count++;
		return 0;
	}
char* remov(){
	if(count==0){
		front=-1;rear=-1;
		printf("\nQueue Is Empty");
		return 0;
	}
	count--;
	rear=(rear+1)%MAX;
	
	return que[rear]; 
}

int main(){
								//Inputs
	
	char string[255];
	printf("\nEnter A String : ");
  	gets(string);
  	printf("\n");
  	int k;
	printf("\nEnter K = ");
	scanf("%d",&k);
  	char word[25][10];
  	char temp[10];
  	int n=0;int o=0;
  	while(string[n]!='\0'){
 		int i=0;
		 	
  		while(string[n]!=' ' && string[n]!='\0'){
  			temp[i++]=string[n++];
		}
		
	  	temp[i]='\0';	
	  	++n;
	  	insert(temp);	
  
}

if(count<k){
	printf("\nCannot Perform String Does Not Contains Sufficient Words");
	return 0;
}else{
	int dif=count-k-1;
	while(dif!=0){
		remov();
		dif--;
	}
	printf("\n%s",remov());
}













}
