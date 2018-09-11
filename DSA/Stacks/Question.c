#include<stdio.h>
int top=-1;
void push(char stack[],char element){
  stack[++top]=element;
}

char pop(char stack[]){
  return stack[top--];
}

int main(){
  printf("Question : \n\t1. (Sedgewick, Exercise 4.6).  A letter means push and an asterisk means pop in the");
    printf("\n\tfollowing sequence.  Give the sequence of values returned by the pop operations");
    printf("\n\twhen this sequence of operations is performed on an initially empty LIFO stack.");
    printf("\n\t\tE A S * Y * Q U E * * * S T * * * I O * N * * *\n");
  printf("\nEnter Expression To Perform : ");
  char string[255];
  char stack[255];
  gets(string);
  int i=0;
  while(string[i]!='\0'){
    if (string[i]!='*') {
      push(stack,string[i++]);}
    else if (string[i]=='*') {
      printf("%c",pop(stack));
      i++;
      }
	}
}

