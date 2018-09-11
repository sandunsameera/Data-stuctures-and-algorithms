

#include<stdio.h>
#include<string.h>

int search(int array[],int keyword,int start){
	if(array[start]==keyword) return start;
	return search(array,keyword,start+1);
}


int main(){
	int array[10]={12,34,56,78,65,4523,4,54,34,90};
	int index;
	index=search(array,78,0);
	printf("Index = %d",index);
}
