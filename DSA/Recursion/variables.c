#include<stdio.h>



int main(){
	int a=10,b=20;
	void funca(){
	printf(" global a = %d\n",a);
}
void funcb(){
	printf("global b = %d\n",b);
}
	
	funca();
	funcb();
}
