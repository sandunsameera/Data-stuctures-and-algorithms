#include<stdio.h>
#include<string.h>
int main(){
	struct student{
		int index;
		char name[20];
	};
	typedef struct student student;
	student student1;
	student1.index=1000;
	scanf("%s",student1.name);
	
	
}

