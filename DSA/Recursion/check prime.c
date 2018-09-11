//to find is it a prime or not
#include<stdio.h>
int checkprime(int number,int divider){
	if(number==1){
		return 1;
	}
	if (divider==1){
		return 1;
	}
	if (number%divider==0){
		return 0;
	}
	return(checkprime(number,divider-1));
}

int main(){
	int n;
	printf("Enter Number : ");
	scanf("%d",&n);
	if (checkprime(n,n-1)==1){
		printf("%d Is a Prime Number\n",n);
	}else{
		printf("%d Is not a Prime Number\n",n);
	}
	main();
}
