#include<string.h>
#include<stdio.h>
int stack1[5]={1,9,9,7};
int stack2[5]={2,1};
int stack3[5];
int top1=-1,top2=-1,top3=-1;

void push1(int element){
	stack1[++top1]=element;
}

void push2(int element){
	stack2[++top2]=element;
}

void push3(int element){
	stack3[++top3]=element;
}

int pop1(){
	if(top1==-1){return 0;
	}else{
	return stack1[top1--];	
}
}

int pop2(){
	if(top2==-1){return 0;
	}else{
	return stack2[top2--];	
}
}

int pop3(){
	if(top3==-1){return 0;
	}else{
	return stack3[top3--];	
}	
}

int main(){
	
	char num1[5],num2[5];
	printf("Enter Number1 : ");
	scanf("%s",&num1);
	printf("\nEnter Number2 : ");
	scanf("%s",&num2);
	int i=0;
	
	while(i!=strlen(num1)){
		push1(atoi(&num1[i]));
		i++;
		
	}
printf("\npassed")
;i=0;
	while(i!=strlen(num2)){
		push2(atoi(&num2[i++]));
		
	}
	

	printf("%d,%d\n",pop1(),pop2());
	printf("%d,%d\n",pop1(),pop2());
	printf("%d,%d\n",pop1(),pop2());
	printf("%d,%d\n",pop1(),pop2());
	int remainder=0;
	int iterator;
	if(top1>top2){
	iterator=top1;}else{
	iterator=top2;}
	while(iterator!=-1){
		
		int tempsum=pop1()+pop2()+remainder;
		remainder=0;
		if (tempsum>=10){
			remainder=1;
			tempsum=tempsum%10;
		}
		
		push3(tempsum);iterator--;
		printf("Executed\n");
	}
	while(top3!=-1){
		printf("%d",pop3());
	}
}
