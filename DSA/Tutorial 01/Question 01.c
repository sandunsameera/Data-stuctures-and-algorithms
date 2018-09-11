#include<stdio.h>
int main(){
	//Variable Declaration
	int grades[2][5]; //Two Dimensional Array Declaration
	int row=0;
	int colmn=0;
	int totmthz=0;
	int totphy=0;
		//Declaration of for loops
		
	for (row;row<2;row++){ //This For Input Marks
		if (row==0){
			printf("Enter Marks For Maths \n Enter Marks:\n");	
		}else{
			printf("Enter Marks For Physics \n Enter Marks:\n");
		}
		for (colmn;colmn<5;colmn++){
			scanf("%i",&grades[row][colmn]);
		}
		colmn=0;	
	}
	colmn=0;
	row=0;
	for (row;row<2;row++){ //This is for calculate the total and average
		for (colmn;colmn<5;colmn++){
			if (row==0){
				totmthz=grades[row][colmn]+totmthz;
		}else{
				totphy=grades[row][colmn]+totphy;		
		}
		}
		colmn=0;	
	}
	printf("Average Of Maths = %lf \n",(float) totmthz/5);
	printf("Average Of Physics = %lf \n",(float) totphy/5);
	
}

