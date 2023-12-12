/*
 Write a program to check whether a triangle is valid or not, when
the three angles of the triangle are entered through the keyboard.
A triangle is valid if the sum of all the three angles is equal to 180
degrees
*/
#include <stdio.h>
int main()
{
    int angle1, angle2, angle3 ;
    printf("Enter the angle1 :");
    scanf("%d", &angle1);
    printf("Enter the angle2 :");
    scanf("%d", &angle2);
    printf("Enter the angle3 :");
    scanf("%d", &angle3);
    if (angle1 + angle2 + angle3 == 180)
    {
        printf("Valid Triangle");
    }
    else if (angle1 + angle2 + angle3 !=180)
    {
        printf("Invalid Triangle");
    }
    return 0;
}