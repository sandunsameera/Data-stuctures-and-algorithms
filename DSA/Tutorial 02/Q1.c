//Data Strucutures and Alogorithms Tutorial 02
//Question 1

#include<stdio.h>

int main(){
	int array[10];
	int n;
	int i=0;
	for(i;i<10;i++){
		printf("\nEnter Number %d For Array : ",i+1);
		scanf("%d",&n);
		array[i]=n;
		
	}
	
	int psum=0;
	int nsum=0;
	i=0;
	for(i;i<10;i+=1){
		if(array[i]>0){	
			psum=psum+array[i];
	}
		if(array[i]<0){
			nsum=nsum+array[i];
		}
	}
	printf("\nSum of all negative numbers = %d",nsum);
	printf("\nSum of all positive numbers = %d",psum);
	printf("\nAverage of all input numbers = %.3f",(float)(psum+nsum)/10);
	
	return 0;
}
