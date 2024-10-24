/*Q.1) Sort a random array of n integers (accept the value of n from user) in ascending
 order by using quick sort algorithm.*/

 #include<stdio.h>
 #include<stdlib.h>

int quicksort(int a[],int start,int end)
{
    int i=start+1;
    int j=end;
    int t,pivot=a[start];

    do{
        while(a[i]<pivot && i<=end)
        {
            i++;
        }
        
        while(a[j]>pivot && j>=start)
        {
            j--;
        }

        if(i<j)
        {
            t=a[i];
            a[i]=a[j];
            a[j]=t;

        }
    }while(i<j);

    a[start]=a[j];
    a[j]=pivot;

    return j;
}

void partition(int a[],int start,int end)
{
    if(start<=end)
    {
        int j=quicksort(a,start,end);
        partition(a,start,j-1);
        partition(a,j+1,end);
    }
}

 int main()
 {
    int n,i,a[100];
    printf("Enter limit:");
    scanf("%d",&n);

    printf("\nRamdon number:");
    for(i=0;i<n;i++)
    {
        a[i]=rand()%100;
        printf("%d ",a[i]);
    }

    partition(a,0,n-1);\

    printf("\nSorted Array:");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
 }