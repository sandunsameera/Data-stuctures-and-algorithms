#include<stdio.h>
//Pattern Printer
int pat(int num);
int main(){
    int num;
    printf("\n                       --------PATTERN PRINTER--------\n\n\n");
    printf("Enter Number To Print Pattern : ");
    scanf("%d",&num);
    pat(num); 
    main();

}
int pat(int num){
	if(num<=1){
		printf("%d",num);
		return;
	}
	pat(num-1);
	printf("%d",num);
	pat(num-1);
	return;
	
}
