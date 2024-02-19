#include<stdio.h>
int fact(int x)
{
    if(x==0)
    return 1;
    else 
    return x*fact(x-1);
}
int main()
{
    int num,factorial=0;
    printf("Enter the num to find the factorial : ");
    scanf("%d",&num);
    factorial=fact(num);
    printf("Factorial =%d \n",factorial);
    return 0;
}