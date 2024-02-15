#include<stdio.h>
int main()
{
    int a[5]={1,2,3,4,5};
    int *p=&a[2];
    printf("pre increment operator %d\n",*(p++));
    printf("later the value of *p becomes %d",*p);
    return 0;
}