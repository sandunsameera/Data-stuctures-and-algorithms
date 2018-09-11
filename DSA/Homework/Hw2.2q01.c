#include<stdio.h>
//Write a program to find whether the array of integers contains a duplicate number
int main(){
	int n;
	printf("How Many Numbers You Have ? ");
	scanf("%d",&n);
	int numarray[n];
	int i;	
	for (i=0;i<n;i++){
		printf("\nEnter Number %d :",i+1);
		scanf("%d",&numarray[i]);
	}
	for(i=0;i<n;i++){
		int k=i+1;
		for(k;k<n;k++){
			if(numarray[i]==numarray[k]){
				printf("Duplications %d\n",numarray[i]);
			}
		}
	}
	
	
}
