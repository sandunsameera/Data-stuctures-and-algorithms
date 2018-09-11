//Data Strucutures and Alogorithms Tutorial 02
//Question 6

#include<stdio.h>
#include<conio.h>

int main(){
	int n;
	printf("\n\nEnter The Size Of The Array : ");
	scanf("%d",&n);
	int top=-1,key;
	int stack[n];int i;


	while(1){
            clrscr();
		if(top==n-1){
			printf("\n\n--Operation Complete,Stack Is Full--\n");
			break;
		}else{
			top++;
			printf("\nEnter Element to Push : ");
			scanf("%d",&stack[top]);
			printf("Pushed : %d\n----------",stack[top]);
		}
	}
	printf("Reverse List\n\n}");
	while(1){
		if(top==-1){
			printf(" {");
			break;

		}else{
			printf(" %d ",stack[top]);
			top--;

		}
	}
}
