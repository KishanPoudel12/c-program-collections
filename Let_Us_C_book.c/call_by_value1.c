#include<stdio.h>
int fun(int ,int );
int main()
{
    int x,y;
    printf("Enter the value of x and y :");
    scanf("%d%d",&x,&y);
    fun(x,y);
    printf("x=%d and y=%d",x,y);
    return 0;
    
}
int fun(int x,int y)
{
 x=5;
 y=2;
 printf("X=%d,Y=%d\n",x,y);
}