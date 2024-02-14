#include<stdio.h>
int add(int *,int *);
int main()
{
    int a,b,temp;
    printf("Enter the value of a and b:");
    scanf("%d%d",&a,&b);
    add(&a,&b);
    printf("sum =%d",add(&a,&b));
    return 0;
}
int add(int *x,int *y)
{
    int c;
    c=*x+*y;
    return c;
}