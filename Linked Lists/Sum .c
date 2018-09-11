#include<stdio.h>
#include<stdlib.h>

int main(){
	int sum;
	printf("\nHow Many Elemets Do You Have : ");
	int i;
	scanf("%d",&i);
	while(i>0){
		int *ptr=(int*) malloc(4);
		printf("Enter Number : ");
		scanf("%d",ptr);
		sum=sum+*ptr;
		free(ptr);
		i--;
	}
	printf("%d",sum);
}
