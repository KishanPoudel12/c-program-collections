#include<stdio.h>
int swap(int  ,int );
int main(){
    int a,b,c;
    printf("\nEnter the value of a and b :");
    scanf("%d%d",&a,&b);
    printf("\nThe value before swapping is %d of a  and %d of b.",a,b);
    swap(a,b);
    printf("\nThe value of a is %d and b is %d after swapping.",a,b);
    return 0;
}
int swap(int x ,int y )
{
    int z;
    z=x;
    x=y;
    y=z;
    printf("x=%d y=%d ",x,y);
}
