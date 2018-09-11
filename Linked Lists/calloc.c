#include<stdlib.h>
#include<stdio.h>
int main(){
	int n,i=0;
	int *pointer;
	scanf("%d",&n);
	pointer=(int*) calloc(n,4);
	for(n;n>i;i++){
		printf("\nenter number : ");
		scanf("%d",&pointer[i]);
	}
	i=0;
	while(i!=n){
		printf("Numbers Entered\n%d",pointer[i++]);
	}
}
