/*Q.1) Sort a random array of n integers (accept the value of n from user) in
ascending order by using insertion sort algorithm. */

#include<stdlib.h>
#include<stdio.h>
int main()
{
    int i,n,p,a[100],t,key;
    printf("Enter limit:");
    scanf("%d",&n);

    for(i=0;i<n;i++)
     a[i]=rand()%10;

      printf("\nn numbers:");   
      for(i=0;i<n;i++)
      printf("%d ",a[i]);

     for(p=1;p<n;p++)
     {
        key=a[p];
        for(i=p-1;i>=0;i--)
        {
            if(key<a[i])
            {
                t=a[i];
                a[i]=a[i+1];
                a[i+1]=t;
            }
        }
     }
     printf("\n\nSorted array:");
    for(i=0;i<n;i++)
     printf("%d ",a[i]);
}