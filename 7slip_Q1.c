/*Q.1) Implement a list library (singlylist.h) for a singly linked list of integer With the
operations create, delete specific element and display. Write a menu driven program to
call these operations.*/

#include<stdio.h>
#include"singlylist.h"

NODE *Del_by_value(NODE*head,int num)
{
    NODE *temp,*temp1;
    int i;
    for(temp=head;temp!=NULL;temp=temp->next)
    {
        if(temp->next->data==num)
        {
            temp1=temp->next;
            temp->next=temp1->next;
            break;
        }
    }
}

int main()
{
    int ch,num;
    NODE*head=NULL;

    do{
        printf("\n\n1-Create\n2-Display\n3-Delete by value\n4-Exit\nEnter choice:");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1:head=create(head);
                    break;

            case 2:printf("\nLinkedlist elements:");
                    display(head);
                    break;
            case 3:printf("Enter number to delete:");
                   scanf("%d",&num);
                    Del_by_value(head,num);
                    break;        
        }
    }while(ch!=4);
}