#include<stdio.h>
int print_arr(int *arr,int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
}
int bubblesort(int *arr,int n)
{
    int temp;
    for(int i=0;i<n;i++)
    {
        int  flag=0;
        for(int j=0;j<n-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
              temp=arr[j];
              arr[j]=arr[j+1];
              arr[j+1]=temp;
              flag=1;
            }
        }
        if(flag==0)
        break;
    }
}
int main()
{
    int A[10]={1,2,6,9,0,4,7,2},n=8;
    print_arr(A,n);
    bubblesort(A,n);
    print_arr(A,n);
    return 0;
}
