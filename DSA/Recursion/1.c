#include<stdio.h>
#include<string.h>
int power(int n,int p){
	if(p==0){
		return(1);
	}
	return(n*power(n,p-1));
}


int revstring(char str[],int size){
	if(size==1){
		printf("%c",str[0]);
		return 0;
	}
	printf("%c",str[size-1]);
	return(revstring(str,size-1));
}

int arrayprint(int array[],int size,int i){
		if (i==size-1){
			printf("%d",array[size-1]);
			return 0;
		}
		printf("%d",array[i]);
		return(arrayprint(array,size,i+1));
}

int main()


{
int arraay[5]={2,4,6,8,10};
arrayprint(arraay,5,0);

	
	
	
	
}
