#include<stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{
 int num, *ptr,sum =0;

 printf("Please enter the amount of numbers:");
 scanf("%d",&num);

 ptr = (int *) malloc(num*sizeof(int));
 
 if (ptr == NULL) 
 {
     printf("Not enough space");

 }

 
 else
 {
     int i;
    
     

     
     for( i = 0; i < num; i++)
     {
        printf("Enter the number %d \n",i+1);
        scanf("%d",ptr +1);
        sum = sum+ *(ptr +1);
     }
     
 }
 
    printf("Sum = %d\n",sum);
    free(ptr);
    return 0;
 

}