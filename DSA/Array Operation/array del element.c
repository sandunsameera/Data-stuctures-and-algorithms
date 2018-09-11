#include<stdio.h>

void del(int array[],int size,int index){
	while(index!=size-1){
		array[index]=array[++index];
	}
}

void merge(int array1[],int size1,int array2[],int size2,int array3[]){
	int i=0,j=0;
	for(i;i<size1;i++){
		array3[i]=array1[i];
	}
	for(i,j;i<size1+size2;i++,j++){
		array3[i]=array2[j];
	}
	printf("Arrays Merged New Array Created array 3");
	
}

void insert(int array[],int size,int pos,int element){
	while(size>=pos){
		array[size]=array[size-1];
		size--;
	}
	array[pos]=element;
}



int main(){
	int i
	;int array1[5]={1,2,3,4,5};
	int array2[5]={6,7,8,9,10};
	int array3[10]={1,2,3,4,5,6,7,8,9,10};
	
	
	
	
	
	insert(array3,11,4,1000);
	for(i=0;i<=10;i++){
		printf(" %d ",array3[i]);
	}
	printf("\n");
	
	do{
		//aaa
	}while(i<1);
	
	
	}
