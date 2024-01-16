#include<stdio.h>
int main()
{   int a=10;
    int *p=&a;
    printf("a=%d",*p);
    printf("\nAdress of a=%x",&a); //hexadecimal form
    return 0;

}