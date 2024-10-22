/*Q.2) Implement a queue library (dyqueue.h) of integers using a dynamic (linked list)
implementation of the queue and implement init, enqueue,dequeue,isempty,peek
operations.*/

#include<stdio.h>
#include"dyqueue.h"

int main()
{
    init();
    int i,num,ch;
    do{
        printf("\n1-Insert\n2-Remove\n3-Peek\n4-Display\n5-Exit\nEnter choice:");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1:enqueue();
                    break;
            case 2:dequeue();
                    break;
            case 3:peek();
                    break;
            case 4:display();
                    break;
            
        }
    }while(ch!=5);
}
