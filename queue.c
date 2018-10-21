#include<stdio.h>
#define max 10
int queue[max];
int front = rear = -1;
void insert;
int delete;
int peek;
int display;

int main(int argc, char const *argv[])
{
    int option;
    int val;
    printf("----------------MAIN MENU----------------------------\n");
    printf("Enter 1 to insert a number:\n");
    printf("Enter 2 to delete a number:\n");
    printf("Enter 3 to  peek:\n");
    printf("Enter 4 to display:\n");


    printf("Enter your option:");


    
    switch (option)
    {
        case 1: insert();
            break;

        case 2: delete();
        if(val !=-1)
        printf("First value of queue is %d:", val);
        break;

        case 3: peek();
        if(val !=-1)
        printf("First value of queue is %d:", val);
        break;

        case 4: display();
        break;

    
        default:
            break;
    }

    
    while(option !=5){

        return 0;
    }
    
}


void insert()
{
    int num;

    printf("Please enter the number to insert:\n");
    scanf("%d",&num);
    if(rear == max-1)
    {
        printf("stack pverflow");
    }

    
    else if
    {
        front == -1 && rear == -1 )
        front = rear = 0;
    }
    else
    {
        rear ++;

        queue[rear] = num;
    }
    
    
}


int delete()
{
    if(front == -1 || front>rear)
    {
        printf("Stack underflow");
    }


    else
    {
        val = queue[front];
        front++;

        if(front>rear)
        {
            front = rear = -1;
            return val;

        }
    }
}

int peek()
{
    if(front == -1 || front > rear )
    {
        printf("Queue is Empty\n");
    }

    
    else 
    {
        
        return queue[front];        
    }

}

int display()
{
    if(front == -1 || front>rear)
    {
        printf("Queue is Empty\n");
    }


    
    else 
    {
        
        for( i = front; i <= rear; i++)
        {
            printf("%d\n",queue[i]);
        }
        
    }
    
}
