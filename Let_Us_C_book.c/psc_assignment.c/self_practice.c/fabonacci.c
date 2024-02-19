#include<stdio.h>
int faboo(int);
int main()
{
    int num=0;
    printf("Enter the number of terms to return :");
    scanf("%d",&num);
    for(int i=0;i<num;i++)
    {
        printf("%d\t",faboo(i));
    }
    return 0;
}
int faboo(int x)
{
    if(x==0 || x==1)
    return x;
    else 
    return faboo(x-1)+faboo(x-2);
}