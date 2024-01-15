#include<stdio.h>
int main()
{
    int arr[10];
    for(int i=0;i<3;i++){
        printf("Enter the element in the index %d:",i);
        scanf("%d",&arr[i]);
    }
    printf("The elements of the array are :");
    for(int i=0;i<3;i++){
        printf("%d",arr[i]);
    }
    return 0;
}