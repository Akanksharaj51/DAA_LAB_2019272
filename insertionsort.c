#include<stdio.h>
void insertionsort(int a[],int n)
{
    int temp,j,comp=0,shift=0;
    for(int i=1;i<n;i++)
    {
        temp = a[i];
        j=i-1;
        while(j>=0&&a[j]>temp)
        {
            comp++;
            a[j+1]=a[j];
            shift++;
            j--;
            
        }
        a[j+1]=temp;
        shift++;
    }

    for(int i=0;i<n;i++)
    printf("%d  ", a[i]);
    
    printf("shift = %d, comparisions = %d", shift,comp);
}
int main()
{
    int n, a[50];
    printf("enter the no of elements: ");
    scanf("%d",&n);
    printf("\n enter elements: ");
    for(int i=0;i<n;i++)
        scanf("%d", &a[i]);

    insertionsort(a,n);    
}
