/*Q.1) Implement a stack library (ststack.h) of integers using a static implementation of the
stack and implementing the operations like init(S),S=push(S) and S=pop(S). Write a driver
program that includes stack library and calls different stack operations. */

#include<stdio.h>
#include"ststack.h"

int main()
{
    int ch,num,n;
    init();
    do{
        printf("\n1-Push\n2-Pop\n3-Exit\nEnter choice:");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1:printf("Enter value:");
                    scanf("%d",&num);
                    push(num);
                    break;

            case 2:if(isempty())
                  {
                        printf("\nStack is empty..");
                  }
                  else
                {
                    n=pop();
                    printf("\nPoped element:%d",n);
                  }  
                    break;

        }
      }while(ch!=3);
}