/*Q.2) Implement a linear queue library (st_queue.h) of integers using a static
implementation of the queue and implementing the operations like init (Q),AddQueue(Q,x)
and X=Delete Queue(Q).Write a program that includes queue library and calls different
queue operations. */

#include<stdio.h>
#include"st_queue.h"

int main()
{
    que q;
    init(&q);

    int num,ch,n;
    do{
        printf("\n1-Insert\n2-Remove\n3-Display\n4-Exit\nEnter choice:");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1:printf("Enter value:");
                    scanf("%d",&num);
                    enqueue(&q,num);
                    break;
            case 2:if(isempty(&q))
                     {
                        printf("\nQueue is underflow!!!!");
                     }
                    else
                     {
                        n=dequeue(&q);
                       printf("\nRemoved / Deleted value:%d",n);
                     } 
                    break;
        
            case 3:display(&q);
                    break;
            
        }
    }while(ch!=4);
}
