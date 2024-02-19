#include<stdio.h>
int main()
{
    int a[5]={1,2,3,4,5};
    int *q, *p=&a[0];
   for(int i=0;i<5;i++){
    q=p+i;
    printf("Element at index %d is %d\n",i,*q);
   }
    return 0; 
}