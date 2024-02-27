#include<stdio.h>
int main()
{
     int num,rem=0,rev_num=0,temp;
    printf("\nEnter the num to reverse :");
    scanf("%d",&num);
    temp=num;
    while(num!=0)
    {
        rem=num%10;
        rev_num=rem+rev_num*10;
        num=num/10;

    }
    num=temp;
    printf("The given num is %d \n The rev num is %d \n",num,rev_num);
    return 0;
}