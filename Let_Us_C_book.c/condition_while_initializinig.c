#include<stdio.h>
int main()
{
    int x, y,a;
    printf("Enter the value of x :");
    scanf("%d",&x);
    y= x<20 ? 15 : 30 ;
    printf("%d",y);
    return 0;
}