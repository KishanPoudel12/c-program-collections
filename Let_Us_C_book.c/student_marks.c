// Example : The marks obtained by a student in 5 different subjects are
// input through the keyboard. The student gets a division as per the
// following rules:
// Percentage above or equal to 60 - First division
// Percentage between 50 and 59 - Second division
// Percentage between 40 and 49 - Third division
// Percentage less than 40 - Fail
// Write a program to calculate the division obtained by the student
#include<stdio.h>
int main(){
    float m1,m2,m3,m4,m5;
    float per;
    printf("Enter the marks(out of 100) :");
    scanf("%f%f%f%f%f",&m1,&m2,&m3,&m4,&m5);
    per=((m1+m2+m3+m4+m5)/500)*100;
    if(per>=60)
        printf("First division");
    else if(per >= 50 && per <60 )
        printf("Second division");
    else if(per >=40 && per <50 )
        printf("Third division");
    else if(per <40 )
        printf("Fail");
    return 0;
}