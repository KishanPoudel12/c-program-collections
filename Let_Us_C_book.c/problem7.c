/* If a five-digit number is input through the keyboard, write a
program to reverse the number */
#include <stdio.h>
int main(){
int a,b,c,d,e;
printf("Enter the 5 digit number :");
scanf("%1d%1d%1d%1d%1d",&a,&b,&c,&d,&e);
printf("The input number is %d%d%d%d%d",a,b,c,d,e);
printf("\nThe reverse of the number is %d%d%d%d%d",e,d,c,b,a);
return 0;
}
