#include<stdio.h>
int average(int arr[],int);
int main()
{
    int result ;
    int avg,marks[]={1,2,3,4,5};
      result= average(marks,5);
   printf("The required average is %d \n",result);
    return 0;

}
int average(int marks[],int x)
{
    int sum=0,average=0;
    for(int i=0;i<x;i++)
    {
        sum=sum+marks[i];
    }
    average=sum/x;
    return average;
}