#include<stdio.h>
int main()
{
int i,j,key,n,diff,c=0;
int a[50];
printf("\nEnter size of array: ");
scanf("%d",&n);
printf("\nEnter array: ");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("\nEnter key element: ");
scanf("%d",&key);
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
if(abs(a[i]-a[j])==key)
c++;
}
}
printf("the no of times = %d",c);
}
