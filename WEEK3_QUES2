#include<stdio.h>
void selectionsort(int a[],int n)
{
    int min,i,j,comp=0,shift=0;
    for(i=0;i<n-1;i++)
    {
       int min=i;
       for(j=i+1;j<n;j++)
       {
          if(a[j]<a[min]) 
          min=j;
          comp++;
       }
    
    
    if(min!=i)
    {
    
        int t;
        t=a[i];
        a[i]=a[min];
        a[min]=t;
    }
    shift++;
    }

    for(int i=0;i<n;i++)
    printf("%d  ", a[i]);
    
    printf("swaps = %d, comparisions = %d", shift,comp);
}
int main()
{
    int n, a[50];
    printf("enter the no of elements: ");
    scanf("%d",&n);
    printf("\n enter elements: ");
    for(int i=0;i<n;i++)
        scanf("%d", &a[i]);

    selectionsort(a,n);    
}
