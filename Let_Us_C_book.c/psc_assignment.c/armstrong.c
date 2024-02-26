#include<stdio.h>
int main()
{
    int num,rem=0,result=0,original_num;
    printf("Enter the num :");
    scanf("%d",&num);
    original_num=num;
    while(num!=0)
    {
        rem=num%10;
        result += rem*rem*rem;
        num =num/10;
    }
    if(original_num==result)
    printf("armstrong");
    else
    printf("Not an armstrong");
    return 0;
}