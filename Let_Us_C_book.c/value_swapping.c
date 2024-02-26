#include<stdio.h>
int swap(int* x ,int *y )
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
    printf("x=%d and y=%d\n",*x,*y);
}
int main()
{
    int n1,n2;
    printf("Enter the values : ");
    scanf("%d%d",&n1,&n2);
    swap(&n1,&n2);
    printf("n1=%d and n2=%d\n",n1,n2);
    return 0;
}