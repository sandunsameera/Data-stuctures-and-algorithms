//to get a binary number
#include<stdio.h>
static int array[50],index=0;




void binary(int n){
	if(n==0){
		index++;
		return;
	}
	index++;
	array[index]=n%2;
	return binary(n/2);
}

int main(){
	printf("Enter Number To Convert To Binary : ");
	int n;
	scanf("%d",&n);
	binary(n);
	for (index;index>0;index--){
		printf("%d",array[index]);
	}
}
