/*Q.1) Implement a stack library (ststack.h) of integers using a static implementation of the
stack and implementing the operations like init(S),S=push(S), and X=peek(S). Write a
driver program that includes stack library and calls different stack operations.*/

#include<stdio.h>
#include"ststack.h"
int main()
{
    int ch,n,a,num;
    stack s;
    init(&s);
    do{
        printf("\n1-Push\n2-Pop\n3-Peek\n4-Exit\nEnter choice:");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1:printf("Ente value:");
                    scanf("%d",&num);
                    push(&s,num);
                    break;
            case 2:if(isempty(&s))
                  {
                        printf("\nStack is empty..\n");
                  }
                  else
                  {
                    n=pop(&s);
                    printf("\nPoped element:%d",n);
                   }  
                    break;
            case 3:if(isempty(&s))
                    {
                        printf("\nStack is empty..");
                    }
                    else
                    {
                       a=peek(&s);
                       printf("\nTop most Element:%d",a)        ;
                     }
                    break;
        }
    }while(ch!=4);
}