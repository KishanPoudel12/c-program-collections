#include<stdio.h>
int main()
{  
    int a[5]={1,2,3,4,5};
    int *p;
    p=&a;
    for(int i=0;i<5;i++){
    printf("Element of array at index %d is %d\n",i,*p);
    p=p+1;  
    }
    return 0;
}