/* If a five-digit number is input through the keyboard, write a
program to reverse the number */
#include <stdio.h>
int main(){
int num,r_num=0,remainder=0,sum=0;
printf("Enter the 5 digit number :");
scanf("%d",&num);
while(num!=0){
    remainder=num % 10;   
    r_num  =remainder+ r_num*10;
    num   =num/10;
    // sum=sum+remainder;
}
printf("The reverse is %d",r_num);
// printf("\nsum=%d",sum);
return 0;
}