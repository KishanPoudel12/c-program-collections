/* If lengths of three sides of a triangle are input through the
keyboard, write a program to find the area of the triangle.
Hint :A=( s (s-a)(s-b)(s-c) ) ^1/2 ,where s= semi-perimeter */

#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c;
    float  s, A;
    printf("Enter the length a:");
    scanf("%f",&a);
    printf("Enter the length b:");
    scanf("%f",&b);
    printf("Enter the length c:");
    scanf("%f",&c);
    s = (a + b + c) / 2;
    printf("The semi-perimeter is %f\n", s);
    A = sqrt(s * (s - a) * (s - b) * (s - c));
    printf("The area of the triangle is %f\n", A);
    return 0;
} 

//CHECK IT