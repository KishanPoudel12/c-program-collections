/* Two numbers are input through the keyboard into two locations C
and D. Write a program to interchange the contents of C and D */
#include<stdio.h>
int main (){
    int a =5,b=6;
    printf("a=%d b=%d",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\na=%d b=%d",a,b);
    return 0;
}