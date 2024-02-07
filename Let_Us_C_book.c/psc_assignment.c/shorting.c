#include<stdio.h>
void bubblesort(int *A,int n)    //short function
{
    int temp=0;
    for(int i=0;i<n;i++)
    {  
         int flag=0;
        for(int j=0;j<n-1-i;j++)
        {
            if(A[j]>A[j+1])
            {
                temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
                flag=1;
            }
        }
        if(flag==0)
        break;
    }
}
void printArray(int *A,int n)   //print function
{
    for(int i=0;i<n;i++)
    {
        printf("%d\t",A[i]);
    }
    printf("\n");
}

int main()
{
    int A[]={1,6,4,9,3,6,0,1},n=8;
    printArray(A,n);  //print element of arrar
    bubblesort(A,n);  //shorting
    printArray(A,n);  // print shorted element
    return 0;
}