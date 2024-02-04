#include<stdio.h>
int factorial(int);
int main()
{
    int num,fact;
    printf("Enter the number to find the factorial :");
    scanf("%d",&num);
    fact=factorial(num);
    printf("The factorial of %d is %d \n",num,fact);
}
int factorial(int j)
{
    int fact=1;
    for(int i=j;i>=1;i--)
    {
        fact=fact*i;
    }
   return fact;
}