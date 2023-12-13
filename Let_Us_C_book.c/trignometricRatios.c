/* If value of an angle is input through the keyboard, write a program
to print all its Trigonometric ratios */
#include <stdio.h>
#include <math.h>
int main()
{
    float radian;
    int degree;
    float PI = 3.14;
    printf("Enter the angle :");
    scanf("%d", &degree);
    radian = degree * (PI / 180.0); // radian = degree * (PI / 180.0);
    printf("The given angle is %d", degree);
    printf("\n sin%d =%f", degree, sin(radian));
    printf("\n cos%d =%f", degree, cos(radian));
    printf("\n tan%d =%f", degree, tan(radian)); // conv to radian and insert
    printf("\n cot%d =%f", degree, 1 / (tan(radian)));
    printf("\n sec%d =%f", degree, 1 / (cos(radian)));
    printf("\n cosec%d =%f", degree, 1 / (sin(radian)));
    return 0;
}