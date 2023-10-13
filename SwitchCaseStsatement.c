// Swich Case statement for making of a simple calculator 
#include<stdio.h>
int main(){
 float   a,b;
 char ch ;
 printf("Choose the operator (+,-,*,/) :");
 scanf("%c",&ch);
 printf("Enter the values :");
 scanf("%f%f",&a,&b);
 switch(ch){
    case '+' :printf("The sum of  two num is %f\n",a+b);
    break ;
    case '-' :printf("The difference between the numbers  is %f\n",a-b);
    break ;
    case '*' :printf("The product of two numbers is %f\n",a*b);
    break ;
    case '/' :printf("The division of two numbers  gives %f\n",a/b);
    break ;
    default :printf("Chose the right operator\n");
 }
printf("THANK YOU");
return 0;
}