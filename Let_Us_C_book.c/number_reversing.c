// If a five-digit number is input through the keyboard, write a program to
// reverse the number. 
#include<stdio.h>
int main()
{
    int num,rem=0,r_num=0;
    printf("Enter the 5digit num:");
    scanf("%d",&num);
    for(int i=0;i<5;i++){
        rem=num%10;
        num=num/10;
        r_num=10*r_num+rem;
    }
    printf("The reverse num is %d",r_num);
    return 0;
}