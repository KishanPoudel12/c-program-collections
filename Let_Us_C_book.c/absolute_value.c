/*
Write a program to find the absolute value of a number entered
through the keyboard
*/
#include <stdio.h>
#include<stdlib.h>    //Note the header file
int main()
{
    int absolute_num, num;
    printf("Enter the number :");
    scanf("%d", &num);
    absolute_num = abs(num);
    printf("\nActual number =%d", num);
    printf("\nAbsolute number =%d", absolute_num);
    return 0;
}