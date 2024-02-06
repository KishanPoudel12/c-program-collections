#include<stdio.h>                  //left 
int sum(int *,int);
int mean();
int sd(); 
int main()
{
    int n,m,a[100], /* ptr=&a[100] */ count=0;
    printf("Enter the no of elements :");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("Enter the element of index %d :\n",i); 
        scanf("%d",&a[i]);
    }
    n=sum(  a, n);
    m=mean();
    printf("sum =%d",n);
}
    int sum( int *arr,int x) 
    {
    int count =0;
    for(int i=0;i<x;i++)
    {
    count=count+ *( arr+i); 
    }
    return count ;
    }