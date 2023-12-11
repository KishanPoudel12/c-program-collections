/*  Any year is input through the keyboard. Write a program to
determine whether the year is a leap year or not.
(Hint: Use the % (modulus) operator)    */

 /*     
    Logic : A year is a leap year if the following conditions are satisfied: 
    1.  The year is multiple of 400.
    2.  The year is a multiple of 4 and not a multiple of 100
    */

#include<stdio.h>
int main(){
    int year;
    printf("Enter the year : ");
    scanf("%d",&year);
    if(year%4==0){
        printf("it is a leap year");
    }
    else if (year%400==0){
        printf("It is a leap year");
    }
    else if (year%100 !=0){
        printf("It is not a leap year");
    }
    return 0;
}