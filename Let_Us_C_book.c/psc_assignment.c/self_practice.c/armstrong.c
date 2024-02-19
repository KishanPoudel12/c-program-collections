#include<stdio.h>
int main()
{
    int num,rem=0,rev_num=0,temp=0;
    printf("Enter the num to reverse :");
    scanf("%d",&num);
    temp=num;
    while(num !=0 )
    {
        rem=num%10;
        rev_num=rem+rev_num*10;
        num=num/10;
    }
    printf("Num rev is %d\n",rev_num);
    if (temp==rev_num)
    printf("num palindrome");
    else 
    printf("Not a num palindrome");
    return 0;
}