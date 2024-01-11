// If lengths of three sides of a triangle are input through the keyboard,
// write a program to find the area of the triangle. 
#include<stdio.h>
#include<math.h>
int main()
{
    float l,b,h,sp,area;
    printf("Enter the length ,breadth,height:");
    scanf("%f%f%f",&l,&b,&h);
    sp=(l+b+h)/2; 
    area=sqrt(sp*(sp-l)*(sp-b)*(sp-h));
    printf("Area of the triangle is %f",area);
    return 0;
}