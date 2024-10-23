/*Q.1) Accept number from user and search inarray using linear serach algorithm. */

#include<stdio.h>
int main()
{
    int a[100],i,n,num;
    printf("Enter limit:");
    scanf("%d",&n);
    printf("Enter n number:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Enter number to search:");
    scanf("%d",&num);

    for(i=0;i<n;i++)
    {
        if(num==a[i])
        {
            printf("\nNumber found....");
            break;
        }
    }
    if(i==n)
    {
        printf("\nNumber not found....");
    }
}