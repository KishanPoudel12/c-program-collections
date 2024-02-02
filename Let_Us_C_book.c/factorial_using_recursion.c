#include<stdio.h>
int factorial(int);
int main()
{
    int num,fact;
    printf("Enter the num to find its factorial :");
    scanf("%d",&num);
    fact=factorial(num);
    printf("The factorial of %d is %d",num,fact);
    return 0;
}
int factorial(int x)
{
    int fact;
    if(x==1)
    return 1;
    else 
    fact=x*factorial(x-1);
    return fact;
}
















