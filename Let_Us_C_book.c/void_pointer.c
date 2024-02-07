#include<stdio.h>
int main()
{
    int a=100;
    void *ptr=&a;
    printf("%d", *(int *)ptr); //In void pointer we need to represrnt the type of the datatype in this manner.
    return 0;
}