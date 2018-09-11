//dynamically increase array size
#include<stdio.h>
int main(){
	int numarray[10]={1,2,3,4,5,6,7,8,9,10};
	printf("Enter The Number You Want To Insert : ");
	int i,e,p,s=9;
	scanf("%d",&e);
	printf("\nEnter The Position You Want To Insert : ");
	scanf("%d",&p);
	insert(numarray,9,p,e);
	for(i=0;i<10;i++){
		printf("%d\n",numarray[i]);
	}
	
	
}

void insert(int array[],int size,int position,int element){
	size-=1;
	int i=size-position;
	for(i;i>=0;i--){
		array[size]=array[size-1];
	}
	array[position]=element;
	printf("\nSuccessfully Inserted The Element To Position %d\n ",position);
}
