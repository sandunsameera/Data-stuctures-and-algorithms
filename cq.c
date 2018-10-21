#include<stdio.h>
#define max 10
int front = 0;
int rear =0;
int count =0;
int cq[max];
int option;

void insert();
int delete();
int display();


int main(int argc, char const *argv[])
{
    int option;

    printf("-------------------MAIN MENU-----------------------\n");
    printf("1 - insert\n");
    printf("2 - delete\n");
    printf("3 - display\n");
    printf("Enter your option:\n");
    scanf("%d",&option);

    
    switch (option)
    {
        case 1:insert();
           break;

        case 2:delete();
            break;

        case 3:display();
            break;
    
        default:
            break;
    }

    
    while(option != 4){
        return 0;
    }
    
}

void insert ()
{
    int val;
    if(count == max)
    {
        printf("Queue is full !\n");
    }

    
    else
    {
        printf("Enter the number to insert:");
        scanf("%d",&val);
        cq[rear] = val;
        rear = (rear +1)%max;
        count = count +1;

    }
    
}

int delete()
{
    if(count == 0)
    {
        printf("Queue is Empty");
    }

    else
    {
        printf("Deleted number is %d",cq[front]);
        front = (front +1)%max;
        count --;
    }
}

int display ()
{

    if(count == 0)
    {
        printf("Queue is Empty\n");
    }
    
    for(int i = front; count!= 0; i++)
    {
        printf("%d\n",cq[i]);
        i = (i+1)%max;
    }
    
}
