#include<stdio.h>
int fact(int);
int main()
{ 
    int a,factorial;
    printf("Enter the value of a :");
    scanf("%d",&a);
    factorial=fact(a);
    printf("The factorial of %d is %d",a,factorial); 
    return 0;
}
int fact(int x)
{
int factorial=0;
if(x==1)
return 1;
else
factorial=x*fact(x-1);
return factorial;
}