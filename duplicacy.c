#include<stdio.h>
void duplicacy(int a[],int n)
{
    int temp,i,j,f=0;
    for(i=0;i<n;i++)
    {
       temp=a[i];
       
       for(j=i+1;j<n;j++)
       {
           if(a[i]==a[j])
           {
               f=1;
               break;
           }
       }
    }
    
    if(f==0)
    printf("NO");
    
    else
    printf("YES");
}
int main()
{
    int n, a[50];
    printf("enter the no of elements: ");
    scanf("%d",&n);
    printf("\n enter elements: ");
    for(int i=0;i<n;i++)
        scanf("%d", &a[i]);

    duplicacy(a,n);    
}