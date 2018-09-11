//recursion to copy a string to other array
#include<stdio.h>
#include<string.h>

void arraycopy(char string1[],char string2[],int n){
	string1[n]=string2[n];
	if(string1[n]=='\0'){
		return ;
	}
	return arraycopy(string1,string2,n+1);
}

int main(){
	char str1[11],str2[11];
	int n=0;
	printf("Enter String To Copy : ");
	scanf("%s",&str1);
	arraycopy(str1,str2,n);
	printf("%s",str2);
	
	
}

