#include<stdio.h>
int main()
{
    int num,rev_num=0,rem=0,temp=0;
    printf("\nEnter the number to reverse :");
    scanf("%d",&num);
    temp=num;
    while(num!=0)
    {
        rem=num%10;
        rev_num=rem+rev_num*10;
        num=num/10;
    }
    num=temp;
    printf("%d",rev_num);
    if(num==rev_num)
    printf("The num is palindrome\n");
    else
    printf("The num is not a palindrome\n");
    return 0;
}