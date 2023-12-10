/*Temperature of a city in Fahrenheit degrees is input through the
keyboard. Write a program to convert this temperature into
Centigrade degrees*/

#include<stdio.h>
int main(){
float temp,fern;
printf("Enter the temp");
scanf("%f",&temp);
printf("The temp in degree celcious is %f",temp);
fern=(temp/100)*180 +32;
printf("\nThe temp in ferenheit is %f",fern);
return 0;
}