/*Q.2)Write a C program to evaluate postfix expression.*/

#include<stdio.h>
#define MAX 5
struct stack
{
    int a[MAX];
    int  top;
}s;

void init()
{
    s.top=-1;
}

int isfull()
{
    if(s.top==MAX-1)
        return 1;
    else 
        return 0;    
}

int isempty()
{
    if(s.top==-1)
        return 1;
    else 
        return 0;    
}

void push(int num)
{
    if(isfull(s))
    {
        printf("\nStack is full...");
    }
    else
    {
        s.top++;
        s.a[s.top]=num;
    }
}

int pop()
{
    if(isempty())
      printf("\nStack is empty......");

    else
    {
        int x=s.a[s.top];
        s.top--;
        return x;
    }  
}
int peek()
{
    return s.a[s.top];
}
void display()
{
    while(!isempty())
    {
        printf("%d ",pop());
    }
}

int main()
{
    char postfix[100],ch;
    int val1,val2,result;
    int a,b,c,d,i,A,B,C,D;

    init();
    printf("Enter postfix Expression:");
    gets(postfix);

    printf("Enter the value of A,B,C,D:");
    scanf("%d%d%d%d",&a,&b,&c,&d);

    for(i=0;postfix[i]!='\0';i++)
    {
        ch=postfix[i];

        if(ch=='A')
            push(a);
        else if(ch=='B')
            push(b);
        else if(ch=='C')
            push(c);
        else if(ch=='D' )
            push(d);
        else
        {
          val1=pop();
          val2=pop();

          switch(ch)  
          {
            case '+':result=val2+val1;
                        push(result);
                         break;
            case '-':result=val2-val1;
                        push(result);
                         break;
            case '*':result=val2*val1;
                        push(result);
                         break;
            case '/':result=val2/val1;
                        push(result);
                         break;
          }
        }
    }
    printf("\nResult=%d",pop());
}