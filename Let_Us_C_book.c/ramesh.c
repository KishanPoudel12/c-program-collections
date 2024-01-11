// Ramesh’s basic salary is input through the keyboard. His dearness
// allowance is 40% of basic salary, and house rent allowance is 20% of
// basic salary. Write a program to calculate his gross salary. 

#include<stdio.h>
int main(){
    int sal,der,all,gross_sal;  
    printf("Enter the salary:");
    scanf("%d",&sal);
    der=(0.4)*sal;
    all=(0.2)*sal;
    gross_sal=sal+der+all;
    printf("salary =%d",gross_sal);
    return 0;

}