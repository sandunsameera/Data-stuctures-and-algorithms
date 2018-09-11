//Data Strucutures and Alogorithms Tutorial 03
//Question 2

#include<stdio.h>
#include<string.h>

int main(){
	int n;
	int top=-1,key;
	char number[100];
	printf("\nEnter Number To Reverse : ");
	scanf("%s",&number);
	char stack[strlen(number)];int i;n=strlen(number);

		
	
	for(i=0;i<n;i++){
		if(top==n-1){
			printf("\n\n--Insertion Complete,Stack Is Full--\n");
			break;	
		}else{
			top++;
			printf("\nElement Pushing : %c",number[i]);
			stack[top]=number[i];
			printf("\nPushed : %c\n----------",stack[top]);
		}
	}
	printf("\n\nReversed Integer\n\n");
	for(i=0;i<n;i++){
		if(top==-1){
			
			break;
			
		}else{
			printf("%c",stack[top]);
			top--;
			
		}
	}
}
