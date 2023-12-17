/*
Find out square of a floating point number using a
function.
*/
#include<stdio.h>
float abc(float);
int main(){
    float a,b,c;
    printf("\nEnter any number :");
    scanf("%f",&a);
    c=abc(a);
    printf("The square is %f",c);
    return 0;
}
float abc(float i)
{
    float j;
    j=i*i;
    return j;
}