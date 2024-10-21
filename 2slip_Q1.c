/*Q.1) Implement a list library (singlylist.h) for a singly linked list of integer
with the operations create, display. Write a menu driven program to call
these operations */


#include<stdio.h>
#include"singlylist.h"

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