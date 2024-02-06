#include<stdio.h>
int main()
{
    int num,a=-1,b=1,c=0;
    printf("\nEnter the number :");
    scanf("%d",&num);
    for(int i=0;i<num;i++)
    {
        c=a+b;
        printf("%d\t",c);
        a=b;
        b=c;
    }
    return 0;
}