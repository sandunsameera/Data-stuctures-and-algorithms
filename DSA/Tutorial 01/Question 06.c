#include<stdio.h>
int gcd(int a,int b){
	int m;
	int n;
	
	if(a==b){
		return a;
	}if(a==0){
		return b;
	}if(b==0){
		return a;
	}
	// format gcd(m,n) m>n ;lets format above variables
	if(a>b){
		m=a;
		n=b;
	}if(b>a){
		m=b;
		n=a;
	}
return(gcd(n,m%n));	
}
int main(){
	int a;
	int b;
	printf("Enter Two Numbers To Get The Greatest Common Divisor ");
	scanf("%d%d",&a,&b);
	int k=gcd(a,b);
	printf("%d",k);
	main();	
}
