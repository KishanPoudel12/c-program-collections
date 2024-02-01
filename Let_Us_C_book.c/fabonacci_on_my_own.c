#include<stdio.h>
int faboo(int);
int main()
{
    int num;
    printf("Enter the no of fabonacci series :");
    scanf("%d",&num);
    for(int i=0;i<num;i++)
    {
      printf("%d\t",faboo(i));
    }
    return 0;
}
int faboo(int x)
{
    if (x==0)
    return 0;
    else if(x==1)
    return 1;
    else 
    return faboo(x-1)+faboo(x-2);
}