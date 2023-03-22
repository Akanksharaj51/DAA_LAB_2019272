#include<stdio.h>
int main()
{
    int a[50],i,n,j,key,temp,f=0;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Enter the key: ");
    scanf("%d",&key);

    for(i=0;i<n;i++)
    {
       temp=a[i];
       for(j=i+1;j<n;j++)
        {
            if((temp+a[j])==key)
            {f=1;
            break;}
        }

        if(f==1)
        break;
    }

    if(f==1)
    printf("%d + %d = %d",temp,a[j],key);

    else
    printf("key not found");
}
