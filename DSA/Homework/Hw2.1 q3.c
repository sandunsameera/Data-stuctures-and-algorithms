#include<stdio.h>
	int main(){
	int max;
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
	max=numarray[0];
	arrayindex=0;
	for(i=1;i<n;i++){
		if (numarray[i+1]>max){
			max=numarray[i+1];
			arrayindex=i+1;
		}
	
	}

numarray[arrayindex]=-500000000;
max=numarray[0];
for (i=1;i<n;i++){
	if (numarray[i+1]>max){
			max=numarray[i+1];
		}
}
printf("Second Max number is %d\n",max);
main();
	
}
