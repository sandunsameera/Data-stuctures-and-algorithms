//Data Strucutures and Alogorithms Tutorial 02
//Question 3
#include<stdio.h>
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
	int record[10];
	recindex=0;
	for(i=0;i<n;i++){
		int numofdup=1;
		int k=i+1;
		for(k;k<n;k++){
			if(numarray[i]==numarray[k]){
				numofdup+=1;
				
			}
			if(numofdup>1){
				
			}
		}	
	}
}
	
