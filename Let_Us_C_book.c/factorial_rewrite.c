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
if(x==1)
return 1;
else
return x*fact(x-1);
}