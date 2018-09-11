#include<stdio.h>
int fun(int x){
	if(x==1){
	return 1;}
	if(x%2==0){
		printf("%d ",x/2);
		return fun(x/2);}
		else{	
	printf("%d ",(x*3)+1);
	return fun(x*3+1);
	}}
int main(){
	printf("13 ");
	fun(13);
}
