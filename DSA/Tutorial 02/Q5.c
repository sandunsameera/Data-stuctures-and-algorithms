////Data Strucutures and Alogorithms Tutorial 02
//Question 4

#include<stdio.h>


	
int main(){
	
	
	printf("        ========  Stack Operation  ========\n\n");
	printf("Type The Command\n    1-Push\n    2-Pop\n    3-Peek\n");
	printf("\n\nEnter The Size Of The Stack : ");
	int top=-1,key,n;
	scanf("%d",&n);
	int stack[n];
	
while(1){
	printf("\nEnter Command : ");
	scanf("%d",&key);
	int i;
switch(key){
	case(1):{
		if(top==n-1){
			printf("\n\n--Cannot Perform,Stack Is Full--");
			
		}else{
			top++;
			printf("Enter Element to Push : ");
			scanf("%d",&stack[top]);
			printf("Pushed : %d\n----------",stack[top]);
			
		}
		break;
		}
	case(2):{
	if(top==-1){
			printf("\n\n---Cannot Perform,Stack Is Empty---");
			
		}else{
			printf("Pop : %d\n----------",stack[top]);
			top--;
		}
		break;}
	case(3):{
		if(top>n){
			printf("--Entry is Empty--");
		}else{if(top==-1){
			printf("--Stack is Empty--");
		}
		printf("Enter The Index To Peek : ");
		scanf("%d",&i);
		if(i>n){
			printf("--No Such Index--");
		}else{
		
		printf("\nItem is %d ",stack[i]);	
		break;}}}
				
}

}}
	
	
