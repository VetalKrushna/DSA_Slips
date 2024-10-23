#include<stdio.h>
#define MAX 5
typedef struct node
{
    int a[MAX];
    int front,rear;
}que;

que *q;

void init(que *q)
{
    q->front=q->rear=-1;
}

int isfull(que *q)
{
    if(q->rear==MAX-1)
        return 1;
    else
       return 0;    
}

int isempty(que *q)
{
    if(q->front==q->rear)
      return 1;
    else 
      return 0;
}

void enqueue(que *q,int num)
{
    if(isfull(q))
    {
        printf("\nQueue is overflow!!!!!");
    }
    else
    {
        q->rear++;
        q->a[q->rear]=num;
        printf("\n%d insert successfully!!!",q->a[q->rear]);
    }
}

int dequeue(que *q)
{
    if(isempty(q))
    {
        printf("\nQueue is underflow!!!!");
    }
    else
    {
        q->front++;
        int a=q->a[q->front];
        return a;
    }
}

void display(que *q)
{
    if(isempty(q))
    {
        printf("\nQueue is underflow!!!!");
    }
    else
    {
        int i;
        printf("\nQueue elements:");
          for(i=q->front+1;i<=q->rear;i++)
             printf("%d ",q->a[i]);
    }
}