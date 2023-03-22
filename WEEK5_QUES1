#include<stdio.h>
int main()
{
char arr[50],b;
int count[26]={0};
int i,n,max=0;

printf("Enter the elements: ");
gets(arr);

for(i=0;i<26;i++)
{
    count[arr[i]-'a']++;
}

for(i=0;i<26;i++)
{
    if(max<count[i])
    {
    max=count[i];
    b=arr[i];}
}

printf("%c - %d",b,max);
}

