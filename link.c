#include<stdio.h>
#include<stdlib.h>

//defining structure of node
struct node
{
    int data; //data portion
    struct node *next; //address portion
}*head;


//functions
void createlist(int n);
void traversing();

int main(int argc, char const *argv[])
{
    int n;
    printf("Enter number of nodes:");
    scanf("%d",&n);

    createlist(n);


    printf("Data in the list:\n");

    traversing();

    return 0;
}

void createlist(int n)
{

    struct node *newnode, *temp;
    int data, i;

    head = (struct node *)malloc(sizeof(struct node));
    //terminate if head is null
    if(head == NULL)
    {
        printf("No memmory allocated");
        exit(0);
    }

    //input data from the user

    printf("Enter data to node 1:");
    scanf("%d",&data);

    head -> data = data; //link data field of next node
    head -> next = NULL; //link address feild to null

    //create n-1 number of nodes
    temp = head;
    
    for(int i = 1; i < n; i++)
    {
        newnode = (struct node*)malloc(sizeof(struct node));

        //if memmory is not allocated for new node
        if(newnode == NULL)
        {
            printf("No memmory allocated");
            break;
        }

        printf("Enter data to node %d:",i);
        scanf("%d",&data);

        newnode -> data = data;
        newnode -> next == NULL;

        temp -> next = newnode; //link this node with previous node
        temp = temp ->next; //make this node to previous node
    }
    


}

//display entire list

void traversing()
{
    struct node *temp;

    //return if list is empty
    if(head == NULL)
    {
        printf("list is empty");
        return;
    }

    temp = head;
    while(temp !=NULL)
    {
        printf("Data = %d\n",temp -> data);//print the data of current node
        temp = temp -> next; //move to next node
    }
}


