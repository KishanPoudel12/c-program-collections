#include<stdio.h>
int cbr(int*,int*);
int main()
{
    int a=5,b=7;

    cbr(&a,&b);
    printf("x=%d y=%d ",a,b);
    return 0;

}
int cbr(int *j,int *k)
{
    *j=7;
    *k=5;
}