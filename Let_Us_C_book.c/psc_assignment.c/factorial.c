#include<stdio.h>
int fact(int x)
{
    if(x==0 )
    return 1;
    else
    return x*fact(x-1);
}
int main()
{
int n,factorial=0;
printf("enter the num to find factorial :");
scanf("%d",&n);
factorial=fact(n);
printf("The factorial of %d is %d\n",n,factorial);
return 0;
}