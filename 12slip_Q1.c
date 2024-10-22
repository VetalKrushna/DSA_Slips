/*Q.1) Sort a random array of n integers (accept the value of n from user) in ascending
 order by using selection sort algorithm.*/

 
#include<stdlib.h>
#include<stdio.h>
int main()
{
    int i,n,p,a[100],index=0,min;
    printf("Enter limit:");
    scanf("%d",&n);

    for(i=0;i<n;i++)
      a[i]=rand()%100;

      printf("\nRandom numbers:");   
      for(i=0;i<n;i++)
      printf("%d ",a[i]);

     for(p=0;p<n;p++)
     {
        min=a[p];
        index=p;
        for(i=p+1;i<n;i++)
        {
            if(a[i]<min)
            {
                min=a[i];
                index=i;
            }
        }
            a[index]=a[p];
            a[p]=min;
     }
     printf("\n\nSorted array:");
    for(i=0;i<n;i++)
     printf("%d ",a[i]);
}