/* If a five-digit number is input through the keyboard, write a
program to reverse the number */
#include <stdio.h>
int main(){
int num,r_num=0,temp=0;
temp=num;
printf("Enter the 5 digit number :");
scanf("%d",&num);
while(num!=0){
    r_num=r_num*10;   
    r_num=num%10+r_num;
    num=num/10;
}
printf("The reverse is %d",r_num);
return 0;
}
