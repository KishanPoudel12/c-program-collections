// Ramesh’s basic salary is input through the keyboard. His dearness
// allowance is 40% of basic salary, and house rent allowance is 20% of
// basic salary. Write a program to calculate his gross salary.

#include<stdio.h>
int main(){
float sal;
float dearn,rent,gross;
printf("Enter the salary : ");
scanf("%f",&sal);
printf("The salary is %f\n",sal);
dearn=0.4*sal;
rent=0.2*sal;
gross=sal-dearn-rent ;
printf("The dearn is %f rent is %fand gross sal is %f",dearn,rent,gross);
return 0;
}