/*Q.2) Write a C program to check whether the contents of two stacks are identical. Use
stack library to perform basic stack operations. Neither stack should be changed.*/

#include<stdio.h>
#define MAX 100
 struct stack
{
    char a[MAX];
    int  top;
}*s;

void init(struct stack *s)
{
    s->top=-1;
}

int isfull(struct stack *s)
{
    if(s->top==MAX-1)
        return 1;
    else 
        return 0;    
}

int isempty(struct stack *s)
{
    if(s->top==-1)
        return 1;
    else 
        return 0;    
}

void push(struct stack *s,char num)
{
    if(isfull(s))
    {
        printf("\nStack is full....");
    }
    else
    {
        s->top++;
        s->a[s->top]=num;
    }
}

int pop(struct stack *s)
{
    if(isempty(s))
      printf("\nStack is empty.......");

    else
    {
        char x=s->a[s->top];
        s->top--;
        return x;
    }  
}
void display(struct stack *s)
{
   for(int i=s->top;i>=0;i--)
        printf("%c",s->a[i]);
    
}

int main()
{
    struct stack s1,s2;

    int i,n;
    char a[20],b[20],c1,c2;

     init(&s1);
     init(&s2);

    printf("Enter content for Ist stack:");
    gets(a);

    printf("Enter content for IIst stack:");
    gets(b);

    for(i=0;a[i]!='\0';i++)
    {
        push(&s1,a[i]);
        push(&s2,b[i]);
    }

printf("\nIst stack content:");
display(&s1);
printf("\nIIst stack content:");
display(&s2);

   while(!isempty(&s1) && !isempty(&s2))
    {
        if( (pop(&s1)) != (pop(&s2)) )
        {
            printf("\n\nContent of stack are different...");
            break;
        }
    } 

     if(isempty(&s1) && isempty(&s2))
     {
        printf("\n\nContent of stack are identical...");
     }
}