/*Q.1)Implement a list library (singlylist.h) for a singly linked list.Create a linked list,reverse
it and display reversed linked list.*/

#include<stdio.h>
#include"singlylist.h"

int main()
{
    int ch;
    NODE*head=NULL;

    do{
        printf("\n\n1-Create\n2-Display\n3-Reverse linked list\n4-Exit\nEnter choice:");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1:head=create(head);
                    break;

            case 2:printf("\nLinkedlist elements:");
                    display(head);
                    break;

            case 3:reverse(head)        ;
                    break;
                    
        }
    }while(ch!=4);

}