#include<stdio.h>
#include<string.h>	
#include<ctype.h>


	int main(){
	int n;
	int top=-1,key;
	char equation[100];
	printf("\nEnter The Infix Equation To Convert : ");
	scanf("%s",&equation);
	n=strlen(equation);
	char stack[n];int i,k=0;
	char temp[2];
	char sign;
	
	while(equation[k]!='\0'){
		if(isalpha(equation[k])){      //(A+B)*(C+D)
			top++;
			stack[top]=equation[k];
		}else{if(ispunct(equation[k])){
				if(equation[k]=='('){
					while(equation[k]!=')'){
						
					}
				}
			temp[0]=stack[top];
			top--;
			top++;
			stack[top]=equation[k];
			top++;
			stack[top]=temp[0];	
			}
		}
		k++;
	
	while(top!=-1){
		printf("%c",stack[top]);
		top--;
	}}}
