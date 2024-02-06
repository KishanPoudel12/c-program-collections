#include<stdio.h>
int main()
{ 
    int  num,rev_num=0,rem=0;
    printf("Enter the number to reverse :");
    scanf("%d",&num);
    while(num!=0)
    {
        rem=num%10;
        rev_num=rem+rev_num*10;
        num=num/10;
    }
    printf("The rev num is %d \n",rev_num);
    return 0;
}