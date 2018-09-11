//Data Strucutures and Alogorithms Tutorial 02
//Question 4
#include<stdio.h>
int main(){
	int n;	
	printf("How Many Numbers Do You Have ? ");
	scanf("%d",&n);
	int array[n];
	int oddarray[n];
	int evenarray[n];
	int i,m=0,k=0,evenind=0,oddind=0;
	for (i=0;i<n;i++){
		printf("\nEnter Number %d :",i+1);
		scanf("%d",&array[i]);
	}
	
	for (i=0;i<n;i++){
		if(array[i]%2==0){
			evenarray[k]=array[i];
			evenind++;
			k++;
		}else{
			oddarray[m]=array[i];
			oddind++;
			m++;
		}
		
	}
	
	printf("\nThe Even Elements{");
	for(i=0;i<evenind;i++){
		printf(" %d ",evenarray[i]);
		
	}
	
	printf("}\n");
	
	printf("\nThe Odd Elements{");
	for(i=0;i<oddind;i++){
		printf(" %d ",oddarray[i]);
		
	}
	
	printf("}\n");
	
}
