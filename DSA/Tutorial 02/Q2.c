//Data Strucutures and Alogorithms Tutorial 02
//Question 2

#include<stdio.h>
int main(){
	int n;	
	printf("How Many Numbers Do You Have ? ");
	scanf("%d",&n);
	int revarray[n];
	int array[n];
	int i;
	for (i=0;i<n;i++){
		printf("\nEnter Number %d :",i+1);
		scanf("%d",&array[i]);
	}
	int x=n-1;
	for(i=n-1;i>=0;i--){
		revarray[i-x]=array[i];
		x-=2;
	}
	printf("\nReversed Array\n{");
	for(i=0;i<n;i++){
		printf(" %d ",revarray[i]);
		
	}
	
	printf("}");
	
	return(0);
}
