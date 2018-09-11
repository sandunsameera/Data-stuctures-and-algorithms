//Factorial
#include<stdio.h>

long long int facto(long n){  //long long data type is for better calculation ranges
	if(n==1){
		return(1);
	}
	return(n*facto(n-1));
}
int main(){
	 long long int i;
	 printf("Enter Number To Get The Factorial : ");
	 scanf("%lld",&i);
	 long long int fact=facto(i);
	 printf("Factorial Of %lld",i);
	 printf(" Is %lld\n\n",fact);
	 main();
	 
}
