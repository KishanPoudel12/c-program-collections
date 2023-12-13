/*
Any year is entered through the keyboard, write a program to
determine whether the year is leap or not. Use the logical operators
&& and ||
*/
#include<stdio.h>
int main(){
    int year;
    printf("Enter the year :");
    scanf("%d",&year);
    if(year%4==0  || year%400 ==0 ){
        printf("leap year");
    }
    else if (year%100 !=0 ){
        printf("Not a leap year");
    }
    else {
        printf("Enter a valid year");
    }
    return 0;
}