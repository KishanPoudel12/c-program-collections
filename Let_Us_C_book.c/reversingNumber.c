/*
 A five-digit number is entered through the keyboard. Write a
program to obtain the reversed number and to determine whether
the original and reversed numbers are equal or no
 */

#include<stdio.h>
int main(){
    int num ,r_num=0,sum=0;
    printf("Enter the num :");
    scanf("%d",&num);
    printf("The Entered number is %d\n",num);
    
    while(num!=0){
        r_num =num%10 +r_num*10;
        sum = num%10 + sum;
        num=num/10;
    }
    printf("rev num is %d",r_num);
    printf("sum of numbers is %d", sum);

    return 0;
}