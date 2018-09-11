#include<stdio.h>

int recur(int n){
	if (n==0){
		return(0);
	}
	return(n+recur(n-1));
	
}


int main(){
	int n;
	printf("\n                     --Calculate Total Of n Numbers--\n\n  ex:-Entering 3 will calculate the total of 3+2+1\n      Entering 4 will calculate the total of 4+3+2+1\n\n Enter Number To Begin : ");
	scanf("%d",&n);
	printf("\n Total Of %d",n);
	printf(" Numbers is ");
	int x=recur(n);
	printf(" %d",x);
	main();
	
	
}
