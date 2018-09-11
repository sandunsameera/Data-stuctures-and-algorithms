//program to count the number of digits in a number
#include<stdio.h>
int count=0;
void function(long long int n){
	if(n==0){
		printf("Number Of Digits : %d\n",count);
		return;
	}
	count+=1;
	return function(n/10);
	
}

int main(){
	function();
}
