#include <stdio.h>
int main()
{
    int a = 10;
    int *p = &a, **q = &p;
    printf("a=%d \n%d \n%d ", *p, **q);
    return 0;
}