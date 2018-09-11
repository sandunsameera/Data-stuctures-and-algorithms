#include<stdio.h>
int main(){
	int n;
	float sum=0;
	printf("How Many Numbers You Have To Get the Mean ? ");
	scanf("%d",&n);
	int numarray[n];
	int i;
	for (i=0;i<n;i++){
		printf("\nEnter Number %d :",i+1);
		scanf("%d",&numarray[i]);
	}
		for (i=0;i<n;i++){
			sum=sum+numarray[i];
			
	}
	printf("Mean Of The Number Series is %.3f",(sum/n));
}
