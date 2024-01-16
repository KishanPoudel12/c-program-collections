// WAP to to find the no of odd or even elements of an array.
#include<stdio.h>
int main()
{   int c1=0,c2=0;
    int arr[10];
    for(int i=0;i<10;i++){
        printf("Enter the element of index %d :",i);
        scanf("%d",&arr[i]);
    }
   for(int i=0;i<10;i++){
    if(arr[i]%2==0){
        c1=c1+1;
    }
    else{
        c2=c2+1;
    }
   }
   printf(" even numbers =%d  odd numbers =%d",c1,c2);
    return 0;
}