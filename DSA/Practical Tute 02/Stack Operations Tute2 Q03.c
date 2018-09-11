/*Question 05 

a)Stack

b)We can simply reverse a string using a stack so
 then we can compare the reversed one with orginal one.

c)	get a string
	make an epty stack
	push string to the stack
	compare the poped out one with original one
	if equals
		then it is palindrome
		else not

*/
#include<stdio.h>
#include<string.h>
int main(){
	printf("-----------PALINDROME TEST------------\n\n");
	//get a srting
	char input[100];
	printf("Input A String : ");
	gets(input);
	
	//create empty stack
	char stack[100];
	int top=-1;
	
	//push string to stack
	
	int len=strlen(input);
	int i=0;
	for(i;i<len;i++){
		stack[++top]=input[i];
	}
	
	//comparing two strings
	i=0;
	while(top!=-1){
		if(input[i]!=stack[top--]){
			printf("\nString Is Not A Palindrome");
			break;
		}
		i++;
	}
	
	if(i==len){
		printf("\nString Is a Palindrome");
	}
}
