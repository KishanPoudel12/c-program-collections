/*
If the three sides of a triangle are entered through the keyboard,
write a program to check whether the triangle is valid or not. The
triangle is valid if the sum of two sides is greater than the largest of
the three sides
*/
#include <stdio.h>
int main()
{
    int s1, s2, s3, lenSum;
    printf("Enter the side1 :");
    scanf("%d", &s1);
    printf("Enter the side2 :");
    scanf("%d", &s2);
    printf("Enter the side3 :");
    scanf("%d", &s3);
    if (s1 > s2 && s1 > s3)
    {
        lenSum = s2 + s3;
        if (lenSum > s1)
        {
            printf("valid triangle");
        }
        else if (lenSum < s1)
        {
            printf("invalid triangle");
        }
    }
    else if (s2 > s1 && s2 > s3)
    {
        lenSum = s1 + s3;
        if (lenSum > s2)
        {
            printf("valid triangle");
        }
        else if (lenSum < s2)
        {
            printf("invalid triangle");
        }
    }
    else if (s3 > s1 && s3 > s2)
    {
        lenSum = s2 + s1;
        if (lenSum > s3)
        {
            printf("valid triangle");
        }
        else if (lenSum < s3)
        {
            printf("invalid triangle");
        }
    }
    else
        printf("equal sidess");
    return 0;
}