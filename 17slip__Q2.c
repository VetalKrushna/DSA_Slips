/*Q.2) There are lists where new elements are always appended at the end of the list. The list
can be implemented as a circular list with the external pointer pointing to the last element
of the list. Implement singly linked circular list of integers with append and display
operations. The operation append(L, n),appends to the end of the list, n integers accepted
from use*/

#include<stdlib.h>
#define memory (struct node*)malloc(sizeof(struct node))
#include<stdio.h>
typedef struct node
{
    int data;
    struct node *next;
}NODE;

NODE* create(NODE*head)
{
    int i,n;
    NODE*temp,*newnode;
    printf("Enter limit:");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        newnode=(NODE*)malloc(sizeof(NODE));
        printf("Enter value:");
        scanf("%d",&newnode->data);
        newnode->next=head;

        if(head==NULL)
          temp=head=newnode;

        else
        {
            temp->next=newnode;
            temp=newnode;
        }  
    }
    return head;
}

void display(NODE* head)
{
    NODE* temp=head;
    do  
    {
        printf("%d ",temp->data);
        temp=temp->next;

    }  while(temp!=head);
}

 NODE *append(NODE*head,int num)
 {
    NODE  *temp,*newnode=memory;
    newnode->data=num;
    for(temp=head;temp->next!=head;temp=temp->next);
    temp->next=newnode;
    newnode->next=head;
    return head;
 }

 
int main()
{
    int ch,num;
    NODE*head=NULL;

    do{
        printf("\n\n1-Create\n2-Display\n3-Apppeend At ene\n4-Exit\nEnter choice:");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1:head=create(head);
                    break;

            case 2:printf("\nLinkedlist elements:");
                    display(head);
                    break;

            case 3: printf("Enter value:");
                 scanf("%d",&num);
                 head=append(head,num);
                 break;
        }
    }while(ch!=4);
}