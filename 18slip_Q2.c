/*Q.2) Write a program that merges two ordered linked lists into third new list. When two
lists are merged the data in the resulting list are also ordered. The two original lists should
be left unchanged. That is merged list should be new one.Use linked implementation */

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

void merge(NODE*head1,NODE*head2,NODE*head3)
{
    NODE*temp1=head1,*temp2=head2,*temp3,*newnode;

    while(temp1!=NULL && temp2!=NULL)
    {
        newnode=(NODE*)malloc(sizeof(NODE));
        newnode->next=NULL;

        if(temp1->data < temp2->data)
        {
            newnode->data=temp1->data;
            temp1=temp1->next;
        }

        else 
        {
            newnode->data=temp2->data;
            temp2=temp2->next;
        }

        if(head3==NULL)
          temp3=head3=newnode;
        else
          {
            temp3->next=newnode;
            temp3=newnode;
          }  
    }
    
    while(temp1!=NULL)
    {
        newnode=(NODE*)malloc(sizeof(NODE));
        newnode->next=NULL;

         newnode->data=temp1->data;
         temp1=temp1->next;
         temp3->next=newnode;
         temp3=newnode;    
    }   

     while(temp2!=NULL)
    {
        newnode=(NODE*)malloc(sizeof(NODE));
        newnode->next=NULL;

         newnode->data=temp2->data;
         temp2=temp2->next;
         temp3->next=newnode;
         temp3=newnode;    
    }  
printf("\nMerged list:");
    display(head3); 
}


int main()
{
    int ch;
    NODE*head1=NULL,*head2=NULL,*head3=NULL;

    do{
        printf("\n\n1-Create Ist linked list\n2-Create II linked list\n3-Display Ist list\n4-Display IInd list\n5-Merge list\n6-Exit\nEnter choice:");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1:head1=create(head1);
                    break;
            case 2:head2=create(head2);
                    break;
            case 3:printf("\nLinkedlist elements:");
                    display(head1);
                    break;
            case 4:printf("\nLinkedlist elements:");
                    display(head2);      
                    break;  
            case 5:merge(head1,head2,head3);
            break;
        }
    }while(ch!=6);
}