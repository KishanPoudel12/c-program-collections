#include<stdio.h>
int main()
{
    int a[]={1,2,3,4,5};
    int *p=&a[2];
    printf("%d\t%d\t%d\n",*--p,*--p,*--p);
    return 0;
}