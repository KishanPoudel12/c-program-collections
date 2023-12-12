/*
Given the length and breadth of a rectangle, write a program to find
whether the area of the rectangle is greater than its perimeter. For
example, the area of the rectangle with length = 5 and breadth = 4
is greater than its perimeter
*/
#include<stdio.h>
int main(){
    float l,b,A;
    float P;
    printf("Enter the length(m) ");
    scanf("%f",&l);
    printf("Enter the breadth(m) ");
    scanf("%f",&b);
    A=l*b;
    printf("\nArea =%f m^2",A);
    P=2*(l+b);
    printf("\nPerimeter =%f m",P);
    if(A>P){
        printf("\nArea is greater");
    }
    else if (A<P){
        printf("\nPerimerter is greater");
    }
    return 0;
}