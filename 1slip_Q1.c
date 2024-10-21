/*Q.1) Implement a list library (doublylist.h) for a doubly linked list of integers
with the create, display operations. Write a menu driven program to call these
operations. */

#include<stdio.h>
#include"doublylist.h"

int main()
{
    int ch;
    NODE*head=NULL;

    do{
        printf("\n\n1-Create\n2-Display\n3-Exit\nEnter choice:");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1:head=create(head);
                    break;

            case 2:printf("\nLinkedlist elements:");
                    display(head);
                    
        }
    }while(ch!=3);
}
