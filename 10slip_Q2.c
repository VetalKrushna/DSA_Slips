/*Q.2) Write a program that copies the contents of one stack into another. Use
stack library to perform basic stack operations. The order of two stacks
must be identical.(Hint:Use a temporary stack to preserve the order).
*/

#include<stdio.h>
#define MAX 5
typedef struct stack
{
    int a[MAX];
    int  top;
}stack;
stack *s;
void init(stack *s)
{
    s->top=-1;
}

int isfull(stack *s)
{
    if(s->top==MAX-1)
        return 1;
    else 
        return 0;    
}

int isempty(stack *s)
{
    if(s->top==-1)
        return 1;
    else 
        return 0;    
}

void push(stack *s,int num)
{
    if(isfull(s))
    {
        printf("\nStack is full...");
    }
    else
    {
        s->top++;
        s->a[s->top]=num;
    }
}

int pop(stack *s)
{
    if(isempty(s))
      printf("\nStack is empty......");

    else
    {
        int x=s->a[s->top];
        s->top--;
        return x;
    }  
}
int peek(stack *s)
{
    return s->a[s->top];
}
void display(stack *s)
{
    while(!isempty(s))
    {
        printf("%d ",pop(s));
    }
}
int main()
{
    int ch,num;
    stack s1,s2,t;
    init(&s1);
    init(&s2);
    init(&t);
    do{
        printf("\n1-Push element\n2-Copy the element\n3-Display\n4-Exit\nEnter choice:");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1:printf("Enter value:");
                   scanf("%d",&num);
                    push(&s1,num);                
                        break;

            case 2:while(!isempty(&s1))
                    {
                         push(&t,pop(&s1));
                    }
                    while(!isempty(&t))
                    {
                        push(&s1,peek(&t));
                         push(&s2,pop(&t));
                    }
                    printf("\nCopies successfully....");
                    break;

            case 3:printf("\nFirst Stack:");
                    display(&s1);
                    printf("\nCopied Stack:");
                    display(&s2);
                    break;
        }
    }while(ch!=4);
}