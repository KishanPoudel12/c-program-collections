/* If a five-digit number is input through the keyboard, write a
program to calculate the sum of its digits. (Hint: Use the modulus
operator ‘%’) */

#include<stdio.h>
int main(){
int a,b,c,d,e;
printf("Enter the 5 digit number :");
scanf("%1d %1d %1d %1d %1d",&a,&b,&c,&d,&e);    //use %1d to read only one input from many input digit 
printf("The input number is %d%d%d%d%d",a,b,c,d,e);
printf("\nThe sum of the numbers is  %d",a+b+c+d+e);
return 0;
}