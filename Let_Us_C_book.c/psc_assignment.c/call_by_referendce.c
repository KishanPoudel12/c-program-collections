#include<stdio.h>
int functn(int *x,int *y)
{
    *x=5;
    *y=7;
}
int main()
{
    int x=7,y=5;
    printf("Before swapping x=%d,y=%d\n",x,y);
    functn(&x,&y);
    printf("After swapping :");
    printf("x=%d,y=%d\n",x,y);
    return 0;
}