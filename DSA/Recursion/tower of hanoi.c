#include<stdio.h>

void hanoi(int n,char start,char temp,char end){
	if(n==0){
		return(0);
	}
	hanoi(n-1,start,end,temp);
	printf("Move Disk %d From Tower %c To %c \n",n,start,end);
	hanoi(n-1,temp,start,end);
}

int main(){
	printf("       =========Tower Of Hanoi=========\n");
	int disc;
	printf("How Many Discs : ");
	scanf("%d",&disc);
	printf("\nTower 1=A\nTower 2=B\nTower 3=C\n\n");
	hanoi(disc,'A','B','C');
	
}	
