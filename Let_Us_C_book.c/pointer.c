#include<stdio.h>
int main()
{
    int a=10,b=11;
    int *p,*q;
    *p=&a;
    *p=&b;
    printf("%d %d %d",*p,&a,&b);
    return 0;
}