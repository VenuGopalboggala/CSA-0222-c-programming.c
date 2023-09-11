#include<stdio.h>
int main()
{
    int n,arr[10],i;
    printf("Enter the size of array:");
    scanf("%d",&n);
    printf("Enter the elements in array:");
    for(i=0;i<n;i++)
    {
    scanf("%d",&arr[i]);
    }
    int rev[n],j=0;
    for(i=n-1;i>=0;i--)
{
rev[j]=arr[i];
j++;
}
printf("the revrsed array:");
for(i=0;i<n;i++)
{
    printf("%d",rev[i]);
}
}
