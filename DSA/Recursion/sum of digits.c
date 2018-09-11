//program to find the sum of digits in a number
long long sumdig(long long n){
	if(n==0) return 0;
	return(n%10+sumdig(n/10));

}
int main(){
	printf("Enter Number To Get The Sum Of Digits : ");
	long long int n;
	scanf("%lld",&n);
	printf("sum is : %lld",sumdig(n));
	main();}
