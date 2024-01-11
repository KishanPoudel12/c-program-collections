// Temperature of a city in Fahrenheit degrees is input through the
// keyboard. Write a program to convert this temperature into
// Centigrade degrees. 
#include<stdio.h>
int main()
{
    float f_temp,c_temp;
    printf("Enter the temp in farenheit :");
    scanf("%f",&f_temp);
    printf("The entered temp is %f\n",f_temp);
    c_temp=(f_temp-32)/1.8;
    printf("The temp in degree celcious is %f\n",c_temp);
    return 0;
}