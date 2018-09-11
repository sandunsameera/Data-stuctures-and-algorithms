#include<stdio.h>
int main()
{
	int min;
	int arrayindex;
	int n;
	printf("How Many Numbers You Have ? ");
	scanf("%d",&n);
	int numarray[n];
	int i;	
	for (i=0;i<n;i++){
		printf("\nEnter Number %d :",i+1);
		scanf("%d",&numarray[i]);
	}
	min=numarray[0];
	arrayindex=0;
	for(i=1;i<n;i++){
		if (numarray[i+1]<min){
			min=numarray[i+1];
			arrayindex=i+1;
		}
	}
printf("Smallest number position is %d",arrayindex);
	
}
