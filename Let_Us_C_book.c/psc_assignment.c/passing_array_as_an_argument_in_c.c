#include<stdio.h>
int function(int *arr,int); 
int main()
{
    int arr[10],n=10;
    for(int i=0;i<n;i++)
    {
        printf("\nEnter the elements of  index %d :",i);
        scanf("%d",&arr[i]);
    }
    function(arr,n);
    return 0;
}
int function(int *arr,int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }
}