#include<stdio.h>
int main()
{
    int arr1[5],arr2[5],arr3[5];
    for(int i=0;i<5;i++){
        printf("Enter the element of index %d ",i);
        scanf("%d",&arr1[i]);
    }
    for(int i=0;i<5;i++){
        printf("Enter the element of index %d :",i);
        scanf("%d",&arr2[i]);
    }
    for(int i=0;i<5;i++){
        printf("%d\n",arr1[i]+arr2[i]);
    } 
    return 0;
}