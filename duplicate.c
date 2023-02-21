#include<stdio.h>
int main()
{
int i,n,key,f=0,c=0;
int a[50];
printf("\nEnter size of array: ");
scanf("%d",&n);
printf("\nEnter array: ");
for(i=0;i<n;i++){
scanf("%d",&a[i]);}
printf("\nEnter key element: ");
scanf("%d",&key);
for(i=0;i<n;i++)
{
if(a[i]==key)
f=1;
}
if(f==1)
{
for(i=0;i<n;i++)
{
 if(a[i]==key)
 c++;
 

 }
 printf("the no of repeated times are: %d",c);
 }
 
 else{
 printf("element not found");
} }
