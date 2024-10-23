/*Q.2)There are lists where insertion should ensure the ordering of data elements.Since the
elements are in ascending order the search can terminate once equal or greater element is
found .Implement a singly linked list of ordered integers (ascending/descending) with
insert, search,and display operations. */


#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node  *next;
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
        newnode->next=NULL;

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
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}

NODE* insertend(NODE *head)
{
    NODE *newnode,*temp;
     newnode=(NODE*)malloc(sizeof(NODE));
     printf("Enter value:");
     scanf("%d",&newnode->data);
     newnode->next=NULL;

    for(temp=head;temp->next!=NULL;temp=temp->next);
    temp->next=newnode;
    return head;
}

void search(NODE*head)
{
    int num;
    NODE*temp;
    printf("Enter number to search:");
    scanf("%d",&num);

    for(temp=head;temp!=NULL;temp=temp->next)
    {
        if(temp->next->data==num || temp->data==num)
        {
            printf("\n%d found....",num);
            break;
        }
    }
    if(temp==NULL)
    {
        printf("\nNumber not found...");
    }
}

int main()
{
    int ch;
    NODE*head=NULL;

    do{
        printf("\n\n1-Create\n2-Display\n3-Search\n4-Insert at end\n5-Exit\nEnter choice:");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1:head=create(head);
                    break;

            case 2:printf("\nLinkedlist elements:");
                    display(head);
                    break;
            case 3:search(head);
                    break;
            case 4:head=insertend(head);
                    break;
        }
    }while(ch!=5);
}

