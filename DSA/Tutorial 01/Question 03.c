//Fibonacci Series 1,1,2,3,5,8,13,21.....
/* 
fib4=fib3		+		fib2
	=(fib2 	+	fib1)	(fib1+fib0)
	=(fib1+fib0)
	=   1 + 0  +	1	+	1	+0
 */

#include<stdio.h>
 
int fibo(int n){
	if(n==1){
		return 1;
	}if(n==0){
		return 0;
	}
	return(fibo(n-2)+fibo(n-1));
}

int main(){
	printf("          -----FIBONACCI SERIES----- \n\n");
	int i=1;
	int n;
	printf("Enter a Number To Get The Fibonacci Series Up To : ");
	scanf("%d",&n);
	printf("\n");
	for (i;i<=n;i++){
		printf("%d  ",fibo(i));
	}
	printf("\n\n");
	main();
}
