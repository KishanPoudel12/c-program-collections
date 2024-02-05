#include<stdio.h>
int main()
{
    int n,a[]={1,2,3,4,5,6,7,8},found=0;
    printf("\nEnter the element to search :");
    scanf("%d",&n);
    for(int i=0;i<8;i++)
    {
        if(a[i]==n)
        {
            printf("\nElement found at index %d ",i);
            found=1;
            break;
        }
    }
    if(found==0)
    {
        printf("element not found");
    }
    return 0;
}