/*
If the three sides of a triangle are entered through the keyboard,
write a program to check whether the triangle is isosceles,
equilateral, scalene or right angled triangle
*/
#include <stdio.h>
int main()
{
    int s1, s2, s3;
    printf("Enter the sides(s1,s2,s3) :");
    scanf("%d%d%d", &s1, &s2, &s3);
    if (s1 == s2 && s2 == s3 && s1 == s3)
    {
        printf("it is equilateral triangle");
    }
    else if (s1 == s2  || s2 == s3  || s3 == s1 )
    {
        printf("it is isosceles triangle ");
    }
    else if (s1 != s2 != s3)
    {
        printf("it is a scalene triangle");
    }
    return 0;
}