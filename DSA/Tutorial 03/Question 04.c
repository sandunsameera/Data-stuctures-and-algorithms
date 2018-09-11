//Question 04

/* 
a)We can use stack for this
b)	begin
	make an empty stack
	get a user input
	check each charactor in the input
	if charactor is a opening parenthesis
		add to stack
		if it is a operand or a operator
			ignore
		if it is closing parenthesis
			pop out one 
				if it is equal to the closing parenthesis
					continue
					
c).-----> */

#include<stdio.h>
#include<string.h>
 int main(){
 	printf("\t-----Parentheses Check-----\n\n");
 	char stack[20];
 	int top=-1;
 	printf("Enter an Expression To Check : ");
 	char expression[50];
 	scanf("%s",&expression);
 	int len=strlen(expression);
 	int i;
 	for (i=0;i<len;i++){
 		if(expression[i]=='{'||expression[i]=='['||expression[i]=='('){
 			top++;
 			printf("Openning Bracket found %c top = %d\n",expression[i],top);
 			stack[top]=expression[i];
		 }
		 
		 
		 if(expression[i]=='}'||expression[i]==']'||expression[i]==')'){
		 	if(expression[i]=='}'){
		 		if(stack[top]=='{'){
		 			top--;}}
			 if(expression[i]==']'){
				 	if(stack[top]=='['){
				 		top--;}
				}
				if(expression[i]==')'){
					if(stack[top]=='('){
						top--;
					}
				}}}
				 
		 
	if(top==-1){
		printf("\nNo Errors All Parathesis are Balanced\n");
	}else{
		printf("\nParenthesis are not balanced\n");
}
main();}
 
