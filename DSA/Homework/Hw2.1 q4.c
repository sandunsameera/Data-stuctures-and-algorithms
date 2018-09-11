#include<stdio.h>
int main(){
	int max;
	int n;
	printf("How Many Numbers You Have ? ");
	scanf("%d",&n);
	int numarray[n];
	int i;	
	for (i=0;i<n;i++){
		printf("\nEnter Number %d :",i+1);
		scanf("%d",&numarray[i]);
	}
}

