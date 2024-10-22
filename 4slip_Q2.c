/*Q.2) Write a program to reverse the elements of a queue using queue library.
 Implement basic queue operations init,enqueue,dequeue,isempty,peek.
*/

#include<stdio.h>
#define MAX 5
typedef struct queue
{
    int a[MAX];
    int front,rear;
}que;
 
 que q;

void init()
{
    q.rear=q.front=-1;
}

int isfull()
{
    if(q.rear==(MAX-1))
        return 1;
    else
        return 0;    
}
int isempty()
{
    if(q.front==q.rear)
        return 1;
    else
        return 0;    
}
void enqueue(int num)
{
    if(isfull())
        printf("\nQueue is overflow..");
     else
     {
    
       q.a[++q.rear]=num;
        printf("\nInserted value=%d",q.a[q.rear]);
     }   
}

void dequeue()
{
    if(isempty())
        printf("\nQueue is underflow..");

     else
     {
        q.front++;
        int num=q.a[q.front];
        
        printf("\nDeleted element:%d",num);
     }   
}
int peek()
{
    if(isempty())
      printf("\nQueue is empty:");
    else
    printf("\nTop most value:%d", q.a[q.rear]);
   
}

void reverse()
{
    int i;
    printf("\nReverse Queue:");
    for(i=q.rear;i!=q.front;i--)
        printf("%d ",q.a[i]);

}
void display()
{
    int i;
    printf("\nQueue:");
    for(i=q.front+1;i<=q.rear;i++)
        printf("%d ",q.a[i]);
}
int main()
{
    int num,ch;
    init();
    do{
        printf("\n1-Enqueue\n2-Dequeue\n3-Peek\n4-Reverse\n5-Display\n6-Exit\nEnter choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:printf("Enter value:");
                    scanf("%d",&num);
                    enqueue(num);
                    break;
            case 2:dequeue();
                    break;
             
            case 3:peek();
                    break;
            case 4:reverse();
            printf("\n");
                    break;    
            case 5:display();
                        break;           
        }
    }while(ch!=6);
}