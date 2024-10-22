#include<stdlib.h>
#include<stdio.h>
#define MAX 5
typedef struct node
{
    int data;
    struct node*next;
}NODE;

NODE *front,*rear;

void init()
{
    rear=front=NULL;
}

int isempty()
{
    if(front==rear)
        return 1;
    else
        return 0;    
}
void enqueue()
{
    NODE* newnode=(NODE*)malloc(sizeof(NODE));
    printf("Enter value:");
    scanf("%d",&newnode->data);
    if(front==NULL)
      front=rear=newnode;

     else
      {
        rear->next=newnode;
        rear=newnode;
      } 
}      

void dequeue()
{
    if(isempty())
    {
        printf("Linkedlist is empty..");
    }
    else
    {
    NODE *temp;
    int num=front->data;    
    temp=front;
    front=front->next;
    free(temp);
    printf("\nRemoved Element:%d",num);
    }
}

int peek()
{
    printf("\nTop most value:%d",rear->data);
}

void display()
{
    NODE *i;
    printf("\nQueue:");
    for(i=front;i<=rear;i++)
        printf("%d ",i->data);
}