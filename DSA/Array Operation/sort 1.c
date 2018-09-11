//sort an array
#include<stdio.h>
int main(){
	int num[10]={1,2,3,4,5,6,7,8,9,10};
	int temp;
	int i=0,j=1,x=0;
	while(x<9){
	for(i,j;j<10;i++,j++){
		if(num[j]>num[i]){
			temp=num[i];
			num[i]=num[j];
			num[j]=temp;
		}}
		x++;
		i=0;j=1;
	}
	for(i=0;i<10;i++){
		printf("%d\n",num[i]);
	}
}
