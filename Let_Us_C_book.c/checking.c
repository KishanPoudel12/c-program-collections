#include<stdio.h>
int main()
{  
    int a[5]={1,5,3,4,5};
    int *p;
    p=&a;
    printf("Element of array at index %d is %d\n",*p);
   *p=2;  
   printf("Element of array at index %d is %d\n",*p);
return 0;
}     