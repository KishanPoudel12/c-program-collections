#include<stdio.h>
int main()
{
    int a=50;
    int *p=&a;
    printf("Adress of a = %d\n",&a);
    printf("Value of a =%d\n",a);
    printf("Adress of a =%d\n",p);
    printf("Value of a =%d\n",*p);
    printf("Adress of p=%d\n",&p);
    printf("Value of p =%d\n",p);
    return 0;
}